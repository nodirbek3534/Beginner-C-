#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, geom;

    cout << "Birinchi musbat sonni kiriting a="; cin >> a;
    cout << "Ikkinchi musbat sonni kiriting b="; cin >> b;

    geom = sqrt (a * b);

    cout << "geom=" << geom << endl;

    return 0;
}
