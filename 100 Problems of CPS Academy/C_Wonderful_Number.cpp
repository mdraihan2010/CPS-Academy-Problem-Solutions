#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n)
{
    return n % 2 == 1;
}

bool isBinaryPalindrome(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary += (n % 2) + '0';
        n /= 2;
    }
    int i = 0, j = binary.length() - 1;
    while (i < j)
    {
        if (binary[i] != binary[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if (isOdd(n) && isBinaryPalindrome(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
//Raihan