//
// Created by 荒井哲也 on 2022/09/03.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    long long answer = 0;
    long long beforeSum = 0;
    for (int i = 0; i < m; i++) {
        answer += a.at(i) * (i + 1);
        beforeSum += a.at(i);
    }

    long long beforeAnswer = answer;
    for (int i = 1; i < n - m + 1; i++) {
        beforeAnswer = beforeAnswer - beforeSum + a.at(i + m - 1) * m;
        beforeSum = beforeSum - a.at(i - 1) + a.at(i + m - 1);

        answer = max(answer, beforeAnswer);
    }

    cout << answer << endl;
}
