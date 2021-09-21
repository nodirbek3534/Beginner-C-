#include <iostream>

using namespace std;

int main()
{
    float s, v1, v2, t, a;

    cout << "s="; cin >> s;
    cout << "v1="; cin >> v1;
    cout << "v2="; cin >> v2;
    cout << "t="; cin >> t;

    a = s - (v1 + v2) * t;

    cout << "a=" << a << endl;

    return 0;
}
