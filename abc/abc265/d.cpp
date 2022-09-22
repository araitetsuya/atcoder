//
// Created by 荒井哲也 on 2022/08/21.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q, r;
    cin >> n, p, q, r;

    vector<int> a(n);
    for (int i = 0;i < n; i++) {
        cin >> a.at(i);
    }

    string answer = "No";
    vector<bool> match(3, false);
    for (int i = 0;i < n; i++) {
        int sum = a.at(i);

        if (sum > p) continue;

        if (sum == p) match.at(0) = true;

        for (int j = i + 1;j < n; j++) {
            sum += a.at(j);

            if (sum == p && !match.at(0)) match.at(0) = true;
            if (sum == p + q && !match.at(1)) match.at(1) = true;
            if (sum == p + q + r && !match.at(2)) match.at(2) = true;

            if (match.at(0) && match.at(1) && match.at(2)) {
                answer = "Yes";

                break;
            }
        }

        if (match.at(0) && match.at(1) && match.at(2)) {
            break;
        }
    }

    cout << answer << endl;
}
