#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string word;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            reverse(word.begin(), word.end());
            cout << word << ' ';
            word.clear();
        }
        else
        {
            word += s[i];
        }
    }
    reverse(word.begin(), word.end());
    cout << word << endl;

    return 0;
}
