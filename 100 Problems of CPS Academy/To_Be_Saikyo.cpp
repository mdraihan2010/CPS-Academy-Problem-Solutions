#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    int maxVal = arr[1];
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }

    if (arr[0] > maxVal)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << maxVal + 1 - arr[0] << endl;
    }

    return 0;
}