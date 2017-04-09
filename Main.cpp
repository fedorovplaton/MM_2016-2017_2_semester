#include "Header.h"


int main(int argc, char **argv)
{
    cout << "input 3 numbers" << '\n';
    int a,b,c;
    cin >> a >> b >> c;
    V<int> v(a, b, c);
	V<string> u("dd", "fff", "fdfd");
	V<double> n(0.2, 0.3, 0.4);
	V<int> l(2, 3 , 4);
	V<int> m(v);
	swap(l, m);
	cout << '\n';
	cout << l.First();
    return 0;
}