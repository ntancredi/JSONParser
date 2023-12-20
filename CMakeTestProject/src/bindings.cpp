// bindings.cpp
#include <pybind11/pybind11.h>
#include "ai_processor.cpp"

namespace py = pybind11;

PYBIND11_MODULE(ai_processor_module, m) {
    py::class_<AIProcessor>(m, "AIProcessor")
        .def_static("processCharacterData", &AIProcessor::processCharacterData);
}