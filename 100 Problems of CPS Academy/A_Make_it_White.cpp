#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int first_b = -1;
    int last_b = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            if (first_b == -1)
            {
                first_b = i;
            }
            last_b = i;
        }
    }

    cout << (last_b - first_b + 1) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}