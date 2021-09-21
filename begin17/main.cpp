#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C, D;

    cout << "A="; cin >> A;
    cout << "B="; cin >> B;
    cout << "C="; cin >> C;

    float AC = fabs(C - A);
    float BC = fabs(C - B);
    D = AC + BC;


    cout << "AC=" << AC << endl;
    cout << "BC=" << BC << endl;
    cout << "D=" << D << endl;

    return 0;
}
