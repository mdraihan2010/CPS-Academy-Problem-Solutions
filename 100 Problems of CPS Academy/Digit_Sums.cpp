#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, rem;
    cin >> n;
    int x = n;
    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    if (x % sum == 0)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    return 0;
}