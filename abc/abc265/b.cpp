//
// Created by 荒井哲也 on 2022/08/21.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, t;
    cin >> n >> m >> t;

    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> a.at(i);
    }

    vector<int> bonus(n - 1);
    for (int i = 0; i < m; i++) {
        int roomNumber;
        cin >> roomNumber;

        cin >> bonus.at(roomNumber - 1);
    }

    string answer = "Yes";
    long long limit = t;
    for (int i = 0; i < n - 1; i++) {
        limit += bonus.at(i);
        limit -= a.at(i);

        if (limit > 0) continue;

        answer = "No";

        break;
    }

    cout << answer << endl;
}
