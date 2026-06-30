#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool found = false; 
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            cout << i << endl;
            found = true; 
            break;       
        }
    }
    if (!found)
    {
        cout << -1 << endl;
    }

    return 0;
}