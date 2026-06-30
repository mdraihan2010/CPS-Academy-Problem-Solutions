#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<int>()); 

    int a = 0, b = 0;
    for (int i = 0; i < n; i += 2)
        a += a
    arr[i];

    for (int i = 1; i < n; i += 2)
        b += arr[i];

    cout << a - b << endl;
    return 0;
}