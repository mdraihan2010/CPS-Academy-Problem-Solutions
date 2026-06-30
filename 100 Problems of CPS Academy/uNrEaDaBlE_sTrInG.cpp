#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int flag = 0;

    for (int i = 1; i <= (int)s.size(); i++)
    {
        if (i % 2 != 0)
        {
            if (!islower(s[i - 1]))
            {
                flag = 1;
                break;
            }
        }
        else
        {
            if (!isupper(s[i - 1]))
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}