#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int len = s.size();

    if (s[0] != 'A')
    {
        cout << "WA" << endl;
        return 0;
    }

    int count = 0;
    int cIndex = -1;
    for (int i = 2; i <= len - 2; i++)
    {
        if (s[i] == 'C')
        {
            count++;
            cIndex = i;
        }
    }

    if (count != 1)
    {
        cout << "WA" << endl;
        return 0;
    }

    for (int i = 0; i < len; i++)
    {
        if (i == 0 || i == cIndex)
            continue; 
        if (!islower(s[i]))
        {
            cout << "WA" << endl;
            return 0;
        }
    }

    cout << "AC" << endl;
    return 0;
}