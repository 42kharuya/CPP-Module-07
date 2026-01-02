#ifndef _ITER_H_
#define _ITER_H_

#include <iostream>
#include <string>

// T
// is makes a modifiable copy of the value.
template <typename T>
void iter(T* array, size_t length, void (*func)(T)) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

// const T
// is make a copy of the value.
template <typename T>
void iter(const T* array, size_t length, void (*func)(const T)) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

// reference of T
// is modifiable the original value.
template <typename T>
void iter(T* array, size_t length, void (*func)(T&)) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

// const reference of T
// is efficient because it does not copy the value.
template <typename T>
void iter(const T* array, size_t length, void (*func)(const T&)) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

// for test ---------------------------------------------------------------
template <typename T>
void increment(T value) {
    ++value;
}

template <typename T>
void incrementRef(T& value) {
    ++value;
}

template <typename T>
void print(const T value) {
    std::cout << "val: " << value << std::endl;
}

template <typename T>
void printRef(const T& value) {
    std::cout << "refVal: " << value << std::endl;
}

#endif // _ITER_H_
