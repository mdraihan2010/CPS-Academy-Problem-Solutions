#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    vector<int> order;
    map<int, int> freq;

    while (cin >> x)
    {
        if (freq.find(x) == freq.end())
        {
            order.push_back(x);
        }
        freq[x]++;
    }

    for (int i = 0; i < order.size(); i++)
    {
        cout << order[i] << " " << freq[order[i]] << "\n";
    }

    return 0;
}