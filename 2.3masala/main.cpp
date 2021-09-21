#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, arif, geo;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    arif = (a + b)/2;
    geo = sqrt (a * b);

    cout << "arif=" << arif << endl;
    cout << "geo=" << geo << endl;

    return 0;
}
