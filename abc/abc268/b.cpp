//
// Created by 荒井哲也 on 2022/09/10.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    bool answer = true;
    if (t.size() >= s.size()) {
        for (int i = 0; i < s.size(); i++) {
            if (s.at(i) == t.at(i)) continue;

            answer = false;

            break;
        }
    } else {
        answer = false;
    }

    if (answer) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
