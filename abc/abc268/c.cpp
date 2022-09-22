//
// Created by 荒井哲也 on 2022/09/10.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ps(n);
    for (int i = 0; i < n; i++) {
        cin >> p.at(i);
    }

    vector<int> = answers(n);
    for (int i = 0; i < n; i++) {
        int p = p.at(i);

        int key =
        answers.at() += 1;

        for (int j = 0; j < n; j++) {
            int key = i + j;
            if (key >= n) key -= n;

            if (j == p.at(key) || (p.at(key) - j + 1) % n == 0 || (p.at(key) - j - 1) % n == 0) tmpAnswer++;
        }

        answer = max(answer, tmpAnswer);
    }

    cout << answer << endl;
}
