#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {
private:
    T *_elements;
    unsigned int _size;
public:
    // orthodox canonical form
    Array();
    Array(unsigned int n);
    // Construction by copy and assignment operator. In both cases, modifying either the
    // original array or its copy after copying musn’t affect the other array
    Array(Array const &ob);
    ~Array();

    // operators
    // Construction by copy and assignment operator. In both cases, modifying either the
    // original array or its copy after copying musn’t affect the other array
    Array& operator=(Array const& ob);
    T& operator[](long long n);
    const T& operator[](long long n) const;

    // member functions
    unsigned int size() const;

    // exceptions
    class OutOfBoundsException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
};
# include "Array.tpp"

#endif