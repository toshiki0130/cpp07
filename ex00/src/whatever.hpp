#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void swap(T& t1, T& t2)
{
    T tmp = t1;
    t1 = t2;
    t2 = tmp; 
}

template <class T>
T min(const T& t1, const T& t2)
{
    return (t1 < t2 ? t1 : t2);
}

template <class T>
T max(const T& t1, const T& t2)
{
    return (t1 > t2 ? t1 : t2);
}

#endif