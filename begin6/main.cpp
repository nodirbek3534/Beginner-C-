#include <iostream>

using namespace std;

int main()
{
    float a, b, c, V, S;

    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;

    V = a * b * c;
    S = (a * b + b * c + a * c);

    cout << "Parallelipiped hajmi V=" << V << endl;
    cout << "Parallelipiped to'la sirti S=" << S << endl;

    return 0;
}
