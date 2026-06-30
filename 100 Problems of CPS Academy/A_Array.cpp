#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> neg, pos, zer;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
            neg.push_back(x);
        else if (x > 0)
            pos.push_back(x);
        else
            zer.push_back(x);
    }

    vector<int> set1, set2, set3;

    set1.push_back(neg[0]);
    set3.push_back(zer[0]);

    for (int x : pos)
        set2.push_back(x);

    int rem = (int)neg.size() - 1;
    int add = rem - (rem % 2); 

    for (int i = 1; i <= add; i++)
        set2.push_back(neg[i]);

    for (int i = add + 1; i < (int)neg.size(); i++)
        set3.push_back(neg[i]);

    for (int i = 1; i < (int)zer.size(); i++)
        set3.push_back(zer[i]);

    cout << set1.size();
    for (int x : set1)
        cout << " " << x;
    cout << "\n";

    cout << set2.size();
    for (int x : set2)
        cout << " " << x;
    cout << "\n";

    cout << set3.size();
    for (int x : set3)
        cout << " " << x;
    cout << "\n";

    return 0;
}