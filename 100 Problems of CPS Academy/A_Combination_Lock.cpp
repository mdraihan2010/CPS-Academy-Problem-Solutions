#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum = 0;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < n; i++)
    {
        int diff = abs(s1[i] - s2[i]);
        sum += min(diff, 10 - diff);
    }

    cout << sum << endl;
    return 0;
}