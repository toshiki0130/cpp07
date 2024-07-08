#ifndef ITER_HPP
# define ITER_HPP
# include <cstddef>
# include <iostream> 

template <typename T>
void printElement(const T& element)
{
    std::cout << element << std::endl;
}

template <typename T, typename F>
void iter(T *T_array, size_t length, F function) {
    for (size_t i=0; i < length; i++) {
        function(T_array[i]);
    }
}

#endif