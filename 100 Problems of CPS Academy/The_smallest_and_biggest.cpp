#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    int sml = arr[0], big = arr[0];
    for (int i = 1; i < 3; i++) {
        if (arr[i] < sml) {
            sml = arr[i];
        }
        else if (arr[i] > big) {
            big = arr[i];
        }
    }
    cout << sml << " " << big << endl;

    return 0;
}