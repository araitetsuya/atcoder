//
// Created by 荒井哲也 on 2022/09/03.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string answer = "No";
    if (s.at(0) == '0') {
        vector<bool> columns(7);
        columns.at(0) = s.at(6) == '1';
        columns.at(1) = s.at(3) == '1';
        columns.at(2) = (s.at(1) == '1' || s.at(7) == '1');
        columns.at(3) = (s.at(0) == '1' || s.at(4) == '1');
        columns.at(4) = (s.at(2) == '1' || s.at(8) == '1');
        columns.at(5) = s.at(5) == '1';
        columns.at(6) = s.at(9) == '1';

        for (int i = 0; i < 7; i++) {
            if (!columns.at(i)) continue;

            bool hasAllDown = false;
            bool canClose = false;
            for (int j = i + 1; j < 7; j++) {
                if (!hasAllDown && !columns.at(j)) hasAllDown = true;
                if (hasAllDown && columns.at(j)) canClose = true;

                if (!canClose) continue;

                answer = "Yes";
                break;
            }
        }
    } else {
        answer = "No";
    }

    cout << answer << endl;
}
