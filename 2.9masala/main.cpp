#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y, z;

    cout << "x="; cin >> x;
    cout << "y="; cin >> y;

    z = (fabs(x) - fabs(y)) / (1 + fabs (x * y));

    cout << "z=" << z << endl;

    return 0;
}
