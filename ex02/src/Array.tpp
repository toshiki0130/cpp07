#ifndef ARRAY_TPP
# define ARRAY_TPP
# include "Array.hpp"

/* ==========================================

        orthodox canonical form

============================================*/

template <typename T>
Array<T>::Array() : _elements(NULL), _size(0)
{
    #if DEBUG
       std::cout << [default constructor is called] << std::endl;
    #endif
}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]), _size(n)
{}

template <typename T>
Array<T>::Array(Array const &ob) : _elements(new T[ob.size()]), _size(ob.size())
{
    for (unsigned int i=0; i < _size; i++) {
        _elements[i] = ob._elements[i];
    }
}

template <typename T>
Array<T>::~Array()
{
    delete [] _elements;
}

/* ==========================================

            operators 

============================================*/

template <typename T>
Array<T>& Array<T>::operator=(Array const& ob)
{
    if (this != &ob) {
        delete [] _elements;
        _size = ob.size();
        _elements = new T[_size];
        for (unsigned int i=0; i < _size; i++) {
            _elements[i] = ob._elements[i];
        }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
    if (n >= _size) {
        throw OutOfBoundsException();
    }
    return _elements[n];
}

template <typename T>
const T& Array<T>::operator[](unsigned int n) const
{
    if (n >= _size) {
        throw OutOfBoundsException();
    }
    return _elements[n];
} 


/* ==========================================

            menber functions 

============================================*/

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

/* ==========================================

                    exceptions

============================================*/
template <typename T>
const char * Array<T>::OutOfBoundsException::what() const throw()
{
    return "Index is out of range";
}
#endif