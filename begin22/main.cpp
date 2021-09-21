#include <iostream>

using namespace std;

int main()
{
    float a, b, c;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    c = a + b;
    a = c - a;
    b = c - b;


    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}
