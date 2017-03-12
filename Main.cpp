#include "vector.hpp"
#include "complexnumbers.hpp"
#include <iostream>
using namespace std;


int main()
{
    complex a(2, 3);
    complex b(3, 4);
    vector <complex> c;
    c.push_back(a);
    c.push_back(b);
    return 0;
}

