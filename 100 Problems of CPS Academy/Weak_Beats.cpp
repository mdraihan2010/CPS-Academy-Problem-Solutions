#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    bool allZero = true;

    for (int i = 1; i < 16; i += 2) 
    {
        if (s[i] != '0')
        {
            allZero = false;
            break;
        }
    }

    if (allZero)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}