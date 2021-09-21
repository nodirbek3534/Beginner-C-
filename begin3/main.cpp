#include <iostream>

using namespace std;

int main()
{
    float a, b, S, P;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    S = a * a;
    P = 2 * (a + b);

    cout << "yuzasi S=" << S << endl;
    cout << "perimetri P=" << P << endl;

    return 0;
}
