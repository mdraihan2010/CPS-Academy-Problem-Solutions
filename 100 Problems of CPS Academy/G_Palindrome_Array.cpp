#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = arr[i];
    }

    reverse(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v[i])
        {
            count++;
        }
    }

    if (count == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}