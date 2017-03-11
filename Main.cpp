#include "complexnumbers.hpp"
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello" << '\n';
    complex a(2, 3);
    complex d(3, 4);
    complex b(a);
    complex m;
    complex c = b;
    cout << c.Re() << c.Im() << '\n';
    if(a == a)
        cout << "1 - ok" << '\n';
    if(a != d)
        cout << "2 - ok" << '\n';
    cout << "input complex number: ";
    cout << a;
    /*cout << '\n';
    cout << m;
    cout << a;*/
    return 0;
}