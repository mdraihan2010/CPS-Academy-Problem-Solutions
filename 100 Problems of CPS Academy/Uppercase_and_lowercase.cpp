#include <bits/stdc++.h>
using namespace std;

int main()
{
    char n;
    cin >> n;
    if (n >= 'A' && n <= 'Z')
    {
        n = tolower(n);
        cout << n << endl;
    }
    else
    {
        n = toupper(n);
        cout << n << endl;
    }

    return 0;
}