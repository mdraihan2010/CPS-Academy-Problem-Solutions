#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}