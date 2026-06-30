#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double x = x2 - x1;
    double y = y2 - y1;

    double distance = sqrt(x * x + y * y);

    cout << fixed << setprecision(2) << distance << endl;

    return 0;
}