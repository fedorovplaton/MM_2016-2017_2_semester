#include "complexnumbers.hpp"
#include <math.h>

int complex::Im()
{
    return im;
}

int complex::Re()
{
    return re;
}

int complex::abs()
{
    return sqrt(re * re + im * im);
}

complex::complex()
{

}

complex::complex(int c_c)
{
    re = c_c;
    im = 0;
}

complex::complex(int c_a, int c_b)
{
    re = c_a;
    im = c_b;
}

complex::complex(const complex &newclass)
{
    re = newclass.re;
    im = newclass.im;
}

complex::~complex()
{

}
