#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
                count++;
            n /= 2;
        }
        int result = 0;
        for (int i = 0; i < count; i++)
        {
            result = result * 2 + 1; 
        }

        cout << result << endl;
    }

    return 0;
}
