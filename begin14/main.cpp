#include <iostream>

using namespace std;

int main()
{
    float L, R, S, pi = 3.14;

    cout << "Aylananing uzunligini kiriting L="; cin >> L;

    R = L / (2 * pi);
    S = pi * R * R;

    cout << "R=" << R << endl;
    cout << "S=" << S << endl;

    return 0;
}
