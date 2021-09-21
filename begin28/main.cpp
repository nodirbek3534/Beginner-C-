#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, d, e, f;

    cout << "a="; cin >> a;

    b = a * a;
    c = pow(a, 3);
    d = pow(a, 5);
    e = pow(a, 10);
    f = pow(a, 15);

    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
    cout << "e=" << e << endl;
    cout << "f=" << f << endl;

    return 0;
}
