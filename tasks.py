import invoke

invoke.run(
    "g++ -O3 -Wall -Werror -shared -std=c++11 -fPIC "
    "`python3 -m pybind11 --includes` "
    "-I /usr/include/python3.8 -I .  "
    "{0} "
    "-o {1}`python3.8-config --extension-suffix` "
    "-L. -lcpp -Wl,-rpath,.".format("pybind11_wrapper.cpp", "pylib")
)

#invoke