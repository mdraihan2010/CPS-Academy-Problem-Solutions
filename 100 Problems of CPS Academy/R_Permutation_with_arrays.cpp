#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> A(n), B(n);

    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    if (A == B)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
//Raihan
