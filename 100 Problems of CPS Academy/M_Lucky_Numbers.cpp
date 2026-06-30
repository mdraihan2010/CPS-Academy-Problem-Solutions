#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    bool found = false;

    for (int i = a; i <= b; i++)
    {
        int temp = i;
        bool lucky = true;

        while (temp > 0)
        {
            int digit = temp % 10;

            if (digit != 4 && digit != 7)
            {
                lucky = false;
                break;
            }

            temp /= 10;
        }

        if (lucky)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << -1;
    }

    cout << endl;
    return 0;
}