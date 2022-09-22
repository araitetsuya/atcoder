//
// Created by 荒井哲也 on 2022/07/31.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    long long matchCount = 0;
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);

        if (a.at(i) == i + 1) matchCount++;
    }

    long long answer = 0;
    for (int i = 0; i < n; i++) {
        if (a.at(i) == i + 1) {
            matchCount -= 1;
            answer += matchCount;
        } else if (a.at(i) > i + 1) {
            if (a.at(a.at(i) - 1) == i + 1) answer++;
        } else {
            continue;
        }
    }

    cout << answer << endl;
}
