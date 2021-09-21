#include <iostream>

using namespace std;

int main()
{
    float R1, R2, pi = 3.14, S1, S2, S3;

    cout << "Katta aylananing radiusini kiriting R1="; cin >> R1;
    cout << "Kichik aylananing radiusini kiriting R2="; cin >> R2;

    S1 = pi * R1 * R1;
    S2 = pi * R2 * R2;
    S3 = pi * (R1 * R1 - R2 * R2);

    cout << "S1=" << S1 << endl;
    cout << "S2=" << S2 << endl;
    cout << "S3=" << S3 << endl;

    return 0;
}
