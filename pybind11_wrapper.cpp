#include <pybind11/pybind11.h>
#include "lib.hpp"
#include <pybind11/stl.h>

PYBIND11_MODULE(pylib, m) {
    m.doc() = "python version of the library lib"; // Optional module docstring
    m.def("pymult", &mult, "a python function which multiplies two numbers");
    m.def("pysum", &sum, "a python function which sum 5 numbers");
}

