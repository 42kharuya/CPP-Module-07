#ifndef _ITER_H_
#define _ITER_H_

#include <iostream>

template <typename T>
void    iter(T *array, const size_t length, void (*f)(T&)) {
    for (size_t i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void    iter(const T *array, const size_t length, void (*f)(const T&)) {
    for (size_t i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void    out(T& out) {
    std::cout << out << std::endl;
}

#endif // _ITER_H_
