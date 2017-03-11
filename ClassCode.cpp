#include "Header.hpp"

V::V()
{
}

V::V(int a, int b, int c)
{
    first = a;
    second = b;
    third = c;
}

V::~V()
{
}

V::V(const V &Another)
{   
    first = Another.first;
    second = Another.second;
    third = Another.third;  
}

int V::getlength()
{
    return first * first + second * second + third * third;
}