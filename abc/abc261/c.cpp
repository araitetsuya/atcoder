//
// Created by 荒井哲也 on 2022/06/18.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s.at(i);
    }

    map<string, int> map;
    for (int i = 0; i < n; i++) {
        string nowS = s.at(i);
        int sCount = map[nowS];

        if (sCount == 0) {
            cout << nowS << endl;
        } else {
            cout << nowS << '(' << sCount << ')' << endl;
        }

        map[nowS] += 1;
    }
}
