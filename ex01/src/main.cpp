#include "iter.hpp"
#include <string>
#include <iostream>

int main()
{
    int int_array[] = {1, 2, 3, 4, 5, 6, 7};
    double d_array[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    std::string str_array[] = {"one", "two", "three", "four", "five", "six", "seven"};

    std::cout << "-----int-------" << std::endl;
    iter(int_array, 7, printElement<int>);

    std::cout << "-----double-------" << std::endl;
    iter(d_array, 7, printElement<double>);

    std::cout << "-----string-------" << std::endl;
    iter(str_array, 7, printElement<std::string>);
}