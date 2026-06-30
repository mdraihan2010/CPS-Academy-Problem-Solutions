#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int p;
    cin >> p;
    vector<int> x(p);
    for (int i = 0; i < p; i++)
        cin >> x[i];

    int q;
    cin >> q;
    vector<int> y(q);
    for (int i = 0; i < q; i++)
        cin >> y[i];

    vector<bool> canX(n + 1, false);
    vector<bool> canY(n + 1, false);

    for (int i = 0; i < p; i++)
        canX[x[i]] = true;
    for (int i = 0; i < q; i++)
        canY[y[i]] = true;

    for (int i = 1; i <= n; i++)
    {
        if (!canX[i] && !canY[i])
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;
    return 0;
}