//
// Created by 荒井哲也 on 2022/07/31.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    cout << a << endl;
}
