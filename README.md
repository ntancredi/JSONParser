# JSONParser
This project demonstrates the integration of Python and C++ using pybind11, showcasing how a C++ module can be used within a Python application. The primary functionality revolves around processing JSON data with C++ and returning the results to Python.

Features:<br>
C++ and Python Integration: Utilizes pybind11 to bridge C++ and Python.<br>
JSON Processing: Employs the nlohmann/json C++ library for parsing and manipulating JSON data.<br>
Cross-Language Data Handling: Demonstrates passing data between Python and C++, showcasing inter-language communication.<br>

Requirements:<br>
Python 3.11.4 (version used for development)<br>
C++ Compiler (compatible with the Python 3.11.4)<br>
pybind11<br>
nlohmann/json library<br>

Building the Project:<br>
Compile the C++ code to generate a Python extension (.pyd or .so file).<br>
Place the compiled extension in the same directory as the Python script.<br>

Running the Application:<br>
Execute the app.py script in a Python environment:<br>
python app.py<br>
This will display the processed JSON data in the command prompt.<br>

Structure:<br>
src/: Contains C++ source files for the module.<br>
include/: Contains the nlohmann/json header file.<br>
app.py: The Python script demonstrating the use of the C++ module.<br>
