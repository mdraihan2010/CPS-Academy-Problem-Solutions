#include <bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long fact = 1;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << fact << endl;
    }
    return 0;
}
// This code is contributed by Raihan
