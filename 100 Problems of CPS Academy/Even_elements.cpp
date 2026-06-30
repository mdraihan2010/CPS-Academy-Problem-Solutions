#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}