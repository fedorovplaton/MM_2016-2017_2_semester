#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

#ifndef HEADER_HPP
#define HEADER_HPP


template <typename T>
class V{
    private:
        T first, second, third;
    public:
        V();
        V(T a, T b, T c);
        ~V();
        V(const V &Another);
        friend void swap(V& a, V& b)
        {
            using std::swap;
            swap(a.first, b.first);
            swap(a.second, b.second);
            swap(a.third, b.third);
        }
        V& operator=(const V& Another)
        {
            V tmp(Another);
            swap(*this, tmp);
            return *this;
        }
		T First();
		T Second();
		T Third();
};

template <typename T>
V<T>::V()
{
}
template <typename T>
V<T>::V(T a, T b, T c)
{
    first = a;
    second = b;
    third = c;
}
template <typename T>
V<T>::~V()
{
}
template <typename T>
V<T>::V(const V &Another)
{   
    first = Another.first;
    second = Another.second;
    third = Another.third;  
}
template <typename T>
T V<T>::First()
{
	return first;
}
template <typename T>
T V<T>::Second()
{
	return second;
}
template <typename T>
T V<T>::Third()
{
	return third;
}


#endif