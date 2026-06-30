#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0) return false;
    return true;
}

bool isPalindrome(int num)
{
    int original = num, reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int countDivisors(int num)
{
    int count = 0;
    for (int i = 1; i <= num; ++i)
        if (num % i == 0) count++;
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    // Maximum & Minimum
    int maxVal = A[0], minVal = A[0];
    for (int i = 1; i < N; i++)
    {
        maxVal = max(maxVal, A[i]);
        minVal = min(minVal, A[i]);
    }

    // Prime & Palindrome count
    int primeCount = 0, palindromeCount = 0;
    for (int i = 0; i < N; i++)
    {
        if (isPrime(A[i])) primeCount++;
        if (isPalindrome(A[i])) palindromeCount++;
    }

    // Max Divisors
    int maxDiv = 0, result = 0;
    for (int i = 0; i < N; i++)
    {
        int d = countDivisors(A[i]);
        if (d > maxDiv || (d == maxDiv && A[i] > result))
        {
            maxDiv = d;
            result = A[i];
        }\
    }

    cout << "The maximum number : " << maxVal << endl;
    cout << "The minimum number : " << minVal << endl;
    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << result << endl;

    return 0;
}