#include <iostream>

using namespace std;

int main()
{
    float R, pi = 3.14, L, S;

    cout << "R="; cin >> R;

    L = 2 * pi * R;
    S = pi * R * R;

    cout << "L=" << L <<  endl;
    cout << "S=" << S <<  endl;

    return 0;
}
