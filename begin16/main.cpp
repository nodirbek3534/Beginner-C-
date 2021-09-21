#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, x2, d;

    cout << "x1="; cin >> x1;
    cout << "x2="; cin >> x2;

    d = abs (x2 - x1);

    cout << "d=" << d << endl;

    return 0;
}
