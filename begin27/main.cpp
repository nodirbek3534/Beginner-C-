#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, d;

    cout << "a="; cin >> a;

    b = pow(a, 2);
    c = pow(a, 4);
    d = pow(a, 8);

    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;

    return 0;
}
