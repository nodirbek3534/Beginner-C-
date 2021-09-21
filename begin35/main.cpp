#include <iostream>

using namespace std;

int main()
{
    float v, u, t1, t2, s;

    cout << "v="; cin >> v;
    cout << "u="; cin >> u;
    cout << "t1="; cin >> t1;
    cout << "t2="; cin >> t2;

    s = (v + u) * t1 - (v - u) * t2;

    cout << "s=" << s << endl;

    return 0;
}
