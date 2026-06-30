#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> f(n + 1, 0);

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        f[x]++;
    }

    int ans = -1;
    for (int i = 1; i <= n; i++)
    {
        if (f[i] == 0)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}