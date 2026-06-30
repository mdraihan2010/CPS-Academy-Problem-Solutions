#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
            cin >> A[i];

        for (int i = 0; i < n; i++)
        {
            int maxVal = A[i];
            for (int j = i; j < n; j++)
            {
               
                for (int k = i; k <= j; k++)
                {
                    if (A[k] > maxVal)
                    {
                        maxVal = A[k];
                    }
                }
                cout << maxVal << " ";
            }
        }
        cout << endl; 
    }
    return 0;
}