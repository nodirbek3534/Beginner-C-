#include <iostream>

using namespace std;

int main()
{
    float a1, b1, c1, a2, b2, c2, x, y, d;

    cout << "a1="; cin >> a1;
    cout << "b1="; cin >> b1;
    cout << "c1="; cin >> c1;

    cout << "a2="; cin >> a2;
    cout << "b2="; cin >> b2;
    cout << "c2="; cin >> c2;

    x = (c2 * b1 - c1 * b2) / (a2 * b1 - a1 * b2);
    y = (c1 * a2 - c2 * a1) / (a2 * b1 - a1 * b2);;

    cout << "x=" << x << endl;
    cout << "y=" << y << endl;

    return 0;
}
