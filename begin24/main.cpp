#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;

    d = a + b + c;
    a = d - (a + b);
    c = a + b - c;
    b = d - 2 * b - a + c;

    cout << "a=" << a << endl;
    cout << "c=" << c << endl;
    cout << "b=" << b << endl;

    return 0;
}
