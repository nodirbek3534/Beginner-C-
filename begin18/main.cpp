#include <iostream>

using namespace std;

int main()
{
    float A, B, C, D, AC, BC;

    cout << "A="; cin >> A;
    cout << "B="; cin >> B;
    cout << "C="; cin >> C;

    AC = C - A;
    BC = C - B;
    D = AC * BC;

    cout << "AC=" << AC << endl;
    cout << "BC=" << BC << endl;
    cout << "D=" << D << endl;

    return 0;
}
