//
// Created by 荒井哲也 on 2022/06/18.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q;

    cin >> n >> k >> q;

    vector<int> a(k);
    for (int i = 0; i < k; i++) {
        cin >> a.at(i);
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < q; i++) {
        int l;
        cin >> l;

        if (a.at(l - 1) == n) continue;

        if (l == k) {
            a.at(l - 1) += 1;
        } else {
            if (a.at(l) - a.at(l - 1) == 1) {
                continue;
            } else {
                a.at(l - 1) += 1;
            }
        }
    }

    for (int i = 0; i < k; i++) {
        cout << a.at(i);

        if (i == k - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}
