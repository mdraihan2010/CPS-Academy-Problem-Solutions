#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] == 2)
        {
            ans = a[i] + 1;
            break;
        }
    }

    if (ans == -1)
    {
        ans = a[n - 1] + 1;
    }

    cout << ans << endl;
    return 0;
}