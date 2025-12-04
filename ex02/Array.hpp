#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <exception>
#include <stdexcept>

template <typename T>
class Array {
   public:
    Array() : _size(0), _data(new T[0]) {}
    Array(unsigned int n) : _size(n), _data(new T[n]) {}
    ~Array() { delete[] _data; }
    Array(Array const &other) : _size(other._size), _data(new T[other._size]) {
        for (unsigned int i = 0; i < _size; ++i) {
            _data[i] = other._data[i];
        }
    }
    Array &operator=(Array const &other) {
        if (this != &other) {
            delete[] _data;
            _size = other._size;
            _data = new T[_size];
            for (unsigned int i = 0; i < _size; ++i) {
                _data[i] = other._data[i];
            }
        }
        return *this;
    }

    T &operator[](unsigned int index) {
        if (index >= _size) {
            throw std::out_of_range("Index out of bounds");
        }
        return _data[index];
    }
    const T &operator[](unsigned int index) const {
        if (index >= _size) {
            throw std::out_of_range("Index out of bounds");
        }
        return _data[index];
    }

    unsigned int size() const { return _size; }

   private:
    unsigned int _size;
    T *_data;
};

#endif // _ARRAY_H_
