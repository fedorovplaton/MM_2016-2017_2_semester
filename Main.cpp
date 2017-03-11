#include "Header.hpp"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout << "Введите 3 числа типа int" << '\n';
    int a,b,c;
    cin >> a >> b >> c;
    V v(a, b, c);
    V k = v;   
    cout << "Длина в квадрате: " << v.getlength() << '\n';
    cout << k.getlength() << '\n';
    V d;
    d = k;
    cout << k.getlength() << '\n';
    return 0;
}