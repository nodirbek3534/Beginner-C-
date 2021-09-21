#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, yi, ko, mod1, mod2;

    cout << "Nolga teng bo'lmagan 1-sonni kiriting a="; cin >> a;
    cout << "Nolga teng bo'lmagan 2-sonni kiriting b="; cin >> b;

    yi = (a + b);
    ko = a * b;

    mod1 = fabs (a);
    mod2 = fabs (b);

    cout << "yi=" << yi << endl;
    cout << "ko=" << ko << endl;

    cout << "mod1=" << mod1 << endl;
    cout << "mod2=" << mod2 << endl;

    return 0;
}
