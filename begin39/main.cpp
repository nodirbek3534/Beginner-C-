#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, x1, x2;

    cout << "a * x * x + b * x + c = 0\n";
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;

    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2 << endl;

    return 0;
}
