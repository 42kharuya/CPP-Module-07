#ifndef _ITER_H_
#define _ITER_H_

#include <iostream>
#include <string>

// T
// is makes a modifiable copy of the value.
template <typename T>
void iter(T* array, const size_t length, void (*func)(T)) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

// const T
// is make a copy of the value.
template <typename T>
void iter(const T* array, const size_t length, void (*func)(const T)) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

// for test ---------------------------------------------------------------
template <typename T>
void increment(T value) {
    ++value;
    std::cout << "val: " << value << std::endl;
}

template <typename T>
void print(const T value) {
    std::cout << "val: " << value << std::endl;
}

#endif // _ITER_H_
