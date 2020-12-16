#include <iostream>
#include <iomanip>
#include<vector>
#include "lib.hpp"

float mult(int a, float b)
{
	float return_value = a * b;
	std::cout << std::setprecision(1) << std::fixed
		  << "    In cppmul: int: " << a
		  << " float " << b
		  << " returning  " << return_value
		  << std::endl;
	return return_value;
}
float sum(std::vector<float> &array)
{
	float s = 0;
	for (int i = 0; i < 5; i++)
		s += array[i];
	return s;
}

//g++ -O3 -Wall -Werror -shared -std=c++11 -fPIC lib.cpp -o libcpp.so