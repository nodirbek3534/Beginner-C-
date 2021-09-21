#include <iostream>

using namespace std;

int main()
{
    float a, b, Yi, Ko, Kv1, Kv2;

    cout << "Nolga teng bo'lmagan son kiriting a="; cin >> a;
    cout << "Nolga teng bo'lmagan son kiriting b="; cin >> b;

    Yi = (a + b);
    Ko = a * b;

    Kv1 = a * a;
    Kv2 = b * b;

    cout << "Yi=" << Yi << endl;
    cout << "Ko=" << Ko << endl;

    cout << "Kv1=" << Kv1 << endl;
    cout << "Kv2=" << Kv2 << endl;

    return 0;
}
