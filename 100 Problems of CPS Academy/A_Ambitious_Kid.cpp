#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int abs_val = abs(x);

        if (abs_val < mn)
        {
            mn = abs_val;
        }
    }

    cout << mn << endl;

    return 0;
}