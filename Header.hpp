#include <algorithm>

#ifndef HEADER_HPP
#define HEADER_HPP

class V{
    private:
        int first, second, third;
    public:
        V();
        V(int a, int b, int c);
        ~V();
        V(const V &Another);
        int getlength();
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
        /*
        V& operator=(const V&& Another)
        {
            swap(*this, tmp);
            return *this;
        }*/
};

#endif