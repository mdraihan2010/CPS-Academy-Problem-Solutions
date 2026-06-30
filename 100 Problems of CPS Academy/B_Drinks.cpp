#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    double total = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        total += x;
    }

    cout << fixed << setprecision(12) << total / n << endl;

    return 0;
}