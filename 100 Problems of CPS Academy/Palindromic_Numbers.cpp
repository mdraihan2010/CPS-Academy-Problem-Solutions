#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    string s = to_string(n); 
    int len = s.size();

    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1]) 
            return false;
    }
    return true; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPalindrome(i))
            count++;
    }

    cout << count << endl;
    return 0;
}