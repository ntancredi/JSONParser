# CMakeList.txt : CMake project for CMakeTestProject, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeTestProject")

# Add source to this project's executable.
# Add the C++ source files
add_library(ai_processor_module SHARED src/ai_processor.cpp src/bindings.cpp)
set_target_properties(ai_processor_module PROPERTIES SUFFIX ".pyd")

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find Python and pybind11
find_package(Python COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 CONFIG REQUIRED)

# Include nlohmann/json
include_directories(${PROJECT_SOURCE_DIR}/include)

# Link pybind11
target_link_libraries(ai_processor_module PRIVATE pybind11::module)

# Set output directory for the Python module
set_target_properties(ai_processor_module PROPERTIES
                      LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}"
                      PREFIX "")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ai_processor_module PROPERTY CXX_STANDARD 20)
endif()




