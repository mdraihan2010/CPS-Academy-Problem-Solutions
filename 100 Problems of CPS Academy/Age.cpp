#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;

    int first_person_days = (c * 365) + (b * 30) + a;
    int second_person_days = (z * 365) + (y * 30) + x;

    if (first_person_days < second_person_days)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "2" << endl;
    }

    return 0;
}