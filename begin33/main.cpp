#include <iostream>

using namespace std;

int main()
{
    float x, y, a, b;

    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    cout << "a="; cin >> a;

    b = (1 + y) * a / x;

    cout << "b=" << b << endl;

    return 0;
}
