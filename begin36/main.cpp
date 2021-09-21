#include <iostream>

using namespace std;

int main()
{
    float v1, v2, s, t, a;

    cout << "v1="; cin >> v1;
    cout << "v2="; cin >> v2;
    cout << "t="; cin >> t;
    cout << "s="; cin >> s;

    a = s + (v1 + v2) * t;

    cout << "a=" << a << endl;

    return 0;
}
