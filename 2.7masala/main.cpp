#include <iostream>

using namespace std;

int main()
{
    float t1, t2, t;
    float V1, V2, V;

    cout << "t1="; cin >> t1;
    cout << "t1="; cin >> t2;

    cout << "V1="; cin >> V1;
    cout << "V2="; cin >> V2;

    t = (V1 + V2) * t2 + V1 * t1/ (2 * V1 + V2);
    V = V1 + V2;

    cout << "aralashmaning temperaturasi t=" << t << endl;
    cout << "aralashmaning hajmi V=" << V << endl;

    return 0;
}
