//
// Created by 荒井哲也 on 2022/08/27.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long constValue = 998244353;

    if (0 < n) {
        cout << n % constValue << endl;
    } else {
        long long left = abs(n % constValue);

        if (left == 0) {
            cout << left << endl;
        } else {
            cout << constValue - left << endl;
        }
    }
}
