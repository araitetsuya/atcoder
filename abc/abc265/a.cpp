//
// Created by 荒井哲也 on 2022/08/21.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;

    int q = floor(n / 3);
    int r = n % 3;

    if (x > y / 3) {
        cout << q * y + r * x << endl;
    } else {
        cout << q * x * 3 + r * x << endl;
    }
}
