//
// Created by 荒井哲也 on 2022/06/18.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int l1, r1, l2, r2;

    cin >> l1 >> r1 >> l2 >> r2;

    if (r1 <= l2 || r2 <= l1) {
        cout << 0 << endl;
    } else {
        int l = max(l1, l2);
        int r = min(r1, r2);

        cout << r - l << endl;
    }
}
