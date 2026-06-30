#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string digits;
    cin >> n >> digits;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += digits[i] - '0';
    }

    cout << sum << endl;

    return 0;
}
//Raihan
