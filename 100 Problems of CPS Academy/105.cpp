#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int total_numbers = 0; 
    for (int i = 1; i <= n; i += 2)
    {

        int divisors_count = 0; 
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisors_count++;
            }
        }
        if (divisors_count == 8)
        {
            total_numbers++;
        }
    }

    cout << total_numbers << endl;

    return 0;
}