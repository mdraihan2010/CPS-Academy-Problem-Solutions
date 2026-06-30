#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, sum = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n > 10)
        {
            n -= 10;
            sum += n;
        }
    }
    cout << sum << endl;
    return 0;
}