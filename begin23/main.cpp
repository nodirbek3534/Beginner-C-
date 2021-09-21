#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;

    d = a + b + c;
    a = d - (a + c);
    b = a + c - b;
    c = d - (a + 2 * c - b);

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;

    return 0;
}
