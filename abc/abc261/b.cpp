//
// Created by 荒井哲也 on 2022/06/18.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<char>> a(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;

        for (int j = 0; j < n; j++) {
            a.at(i).at(j) = input.at(j);
        }
    }

    string result = "correct";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            char iRes = a.at(i).at(j);
            char jRes = a.at(j).at(i);

            if (iRes == 'W' && jRes == 'L') continue;
            if (iRes == 'L' && jRes == 'W') continue;
            if (iRes == 'D' && jRes == 'D') continue;

            result = "incorrect";

            break;
        }
    }

    cout << result << endl;
}
