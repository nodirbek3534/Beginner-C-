#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float S, d, R, pi = 3.14;

    cout << "Aylanani yuzasini kiriting S="; cin >> S;

    R = sqrt (S / pi);
    d = 2 * R;

    cout << "R=" << R << endl;
    cout << "d=" << d << endl;

    return 0;
}
