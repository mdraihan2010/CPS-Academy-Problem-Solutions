#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int count = 1;
    int ans = 1;

    for (int i = 1; i < (int)s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            ans = max(ans, count);
            count = 1;
        }
    }

    ans = max(ans, count); 
    cout << ans << endl;

    return 0;
}