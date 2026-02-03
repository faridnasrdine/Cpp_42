#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
    T* data;
    unsigned int _size;
public:
    Array() : data(NULL), _size(0) {}
    Array(unsigned int n) : data(new T[n]()), _size(n) {}
    Array(const Array &other): data(NULL), _size(other._size)
    {
        if(_size > 0)
        {
            data = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                data[i] = other.data[i];
        }
    }

    Array& operator=(const Array &other)
    {
        if(this != &other)
        {
            delete[] data;
            _size = other._size;
            if(_size > 0)
                data = new T[_size];
            else 
                data = NULL;
            for (unsigned int i = 0; i < _size; i++)
                data[i] = other.data[i];
        }
        return *this;
    }

    ~Array(){
        delete[] data;
    }

    T& operator[](unsigned int index)
    {
        if(index >= _size)
            throw std::exception();
        return data[index];
    }
    const T& operator[](unsigned int index) const
    {
        if(index >= _size)
            throw std::exception();
        return data[index];
    }
    unsigned int size() const
    {
        return _size;
    }
};



#endif