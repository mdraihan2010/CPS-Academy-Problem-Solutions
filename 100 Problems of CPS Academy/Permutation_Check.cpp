#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], f[n + 1] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        f[a[i]]++;
    }
    bool isPermutation = true;
    for (int i = 1; i <= n; i++) {
        if (f[i] != 1) {
            isPermutation = false;
            break;
        }
    }
    if (isPermutation) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}