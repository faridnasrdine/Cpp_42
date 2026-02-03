#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array, const size_t len, void (*func)(T&))
{
    if(!array || !func)
        return;
    for(size_t i; i < len; i++)
        func(array[i]);
}

template <typename T>
void iter(const T* array, const size_t len, void (*func)(const T&))
{
    if(!array || !func)
        return;
    for(size_t i; i < len; i++)
        func(array[i]);
}
#endif