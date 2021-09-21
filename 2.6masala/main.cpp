#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float L, g = 10, pi = 3.14, T;

    cout << "matematik mayatnik uzunligi L="; cin >> L;

    T = 2 * pi * sqrt (L / g);

    cout << "mayatnik davri T=" << T << endl;

    return 0;
}
