#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    map<int, long long> freq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    long long totalpairs = n * (n - 1) / 2;
    long long invalidpairs = 0;

    for (auto &p : freq)
    {
        long long k = p.second;
        invalidpairs += k * (k - 1) / 2;
    }

    cout << totalpairs - invalidpairs << endl;

    return 0;
}