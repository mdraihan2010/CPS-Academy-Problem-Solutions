#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, sum = 0, rem;
    cin >> num;
    int temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }
    cout << sum << endl; 
    if (temp == sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
