#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, P;

    cout << "Uchburchakning 1-katetini kiriting a="; cin >> a;
    cout << "Uchburchakning 2-katetini kiriting b="; cin >> b;

    c = sqrt (a * a + b * b);
    P = a + b + c;

    cout << "c=" << c << endl;
    cout << "P=" << P << endl;

    return 0;
}
