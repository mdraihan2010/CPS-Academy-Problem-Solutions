#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, q;
    cin >> k >> q;

    vector<int> a(k);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    int limit = a[0] - 1;

    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        if (n <= limit)
        {
            cout << n << " ";
        }
        else
        {
            cout << limit << " ";
        }
    }
    cout << "\n";
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