#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    char x;
    cin >> a >> x >> b;
    cout << fixed << setprecision(3);
    if (x == '+')
    {
        cout << a + b << endl;
    }
    else if (x == '-')
    {
        cout << a - b << endl;
    }
    else if (x == '*')
    {
        cout << a * b << endl;
    }
    else if (x == '/')
    {
        if (b != 0)
        {
            cout << a / b << endl;
        }
        else
        {
            cout << "ze" << endl;
        }
    }
    else
    {
        cout << "ze" << endl;
    }
    return 0;
}