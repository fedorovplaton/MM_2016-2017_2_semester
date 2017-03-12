#include <iostream>
using namespace std;

#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class complex{
private:
    int re;
    int im;
public:
    int Im();
    int Re();
    int abs();
    complex();
    complex(int c_c);
    complex(int c_a, int c_b);
    complex(const complex &newclass); // costructor of copy
    ~complex();
    complex& operator= (complex &z)
    {
        re = z.re;
        im = z.im;
        return *this; 
    }
    complex& operator+= (complex &z)
    {
        re = re + z.re;
        im = im + z.im;
        return *this;
    }
    complex operator+ (complex &z)
    {
        return complex(re + z.re, im + z.im);
    }
    complex operator- (complex &z)
    {
        return complex(re - z.re, im - z.im);
    }
    complex operator* (complex &z)
    {
        return complex(re * z.re - im * z.im, re * z.im + im * z.re);
    }
    bool operator== (complex &z1)
    {
        if (re == z1.re && im == z1.im)
            return 1;
        return 0;
    }
    bool operator!= (complex &z1)
    {
        if(re == z1.re && im == z1.im)
            return 0;
        return 1;
    }
    friend ostream& operator<< (ostream &,  const complex &);
    friend istream& operator>> (istream &, complex &);
};

ostream& operator<<(ostream &out, const complex &z)
{
    return out << "(" << z.re << "," << z.im << ")";   
}

istream& operator>>(istream &in, complex &z)
{
    in >> z.re >> z.im;
    return in; 
}

#endif  
