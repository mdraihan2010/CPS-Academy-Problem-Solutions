#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
        swap(x, y);
    }
    int path_1 = 0;
    for (int i = x; i < y; i++)
    {
        path_1 += arr[i];
    }
    int path_2 = sum - path_1;
    cout << min(path_1, path_2) << endl;

    return 0;
}