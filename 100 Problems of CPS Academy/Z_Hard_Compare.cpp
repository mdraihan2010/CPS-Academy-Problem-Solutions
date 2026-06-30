#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    double left = B * log(A);
    double right = D * log(C);

    if (left > right)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
//Raihan