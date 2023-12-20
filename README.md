# JSONParser
This project demonstrates the integration of Python and C++ using pybind11, showcasing how a C++ module can be used within a Python application. The primary functionality revolves around processing JSON data with C++ and returning the results to Python.

Features
C++ and Python Integration: Utilizes pybind11 to bridge C++ and Python.
JSON Processing: Employs the nlohmann/json C++ library for parsing and manipulating JSON data.
Cross-Language Data Handling: Demonstrates passing data between Python and C++, showcasing inter-language communication.

Requirements
Python (version used for development)
C++ Compiler (compatible with the used Python version)
pybind11
nlohmann/json library

Building the Project
Compile the C++ code to generate a Python extension (.pyd or .so file).
Place the compiled extension in the same directory as the Python script.

Running the Application
Execute the app.py script in a Python environment:
python app.py
This will display the processed JSON data in the command prompt.

Structure
src/: Contains C++ source files for the module.
include/: Contains the nlohmann/json header file.
app.py: The Python script demonstrating the use of the C++ module.
