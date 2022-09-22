//
// Created by 荒井哲也 on 2022/08/13.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    string str = "atcoder";

    for (int i = l - 1; i < r; i++) {
        cout << str.at(i);
    }

    cout << endl;
}
