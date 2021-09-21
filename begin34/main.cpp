#include <iostream>

using namespace std;

int main()
{
    float x, y, a, b, c;

    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    c = (a * y - b * x) / (x * y);

    cout << "c=" << c << endl;

    return 0;
}
