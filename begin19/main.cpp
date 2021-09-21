#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, x2, y1, y2;

    cout << "Birinchi nuqta A(x1; y1)" << endl;
    cout << "x1="; cin >> x1;
    cout << "y1="; cin >> y1;

    cout << "Ikkinchi nuqta B(x2; y2)" << endl;
    cout << "x2="; cin >> x2;
    cout << "y2="; cin >> y2;

    a = fabs(y2 - y1);
    b = fabs(x2- x1);
    P = 2 * (a + b);
    S = a * b;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "P=" << P << endl;
    cout << "S=" << S << endl;

    return 0;
}
