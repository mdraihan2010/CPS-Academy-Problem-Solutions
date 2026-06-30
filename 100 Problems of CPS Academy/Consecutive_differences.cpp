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

    int max_diff = abs(arr[1] - arr[0]);

    for (int i = 1; i < n; i++)
    {
        int current_diff = abs(arr[i] - arr[i - 1]);
        if (current_diff > max_diff)
        {
            max_diff = current_diff;
        }
    }

    cout << max_diff << endl;
    return 0;
}