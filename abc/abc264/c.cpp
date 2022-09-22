//
// Created by 荒井哲也 on 2022/08/13.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, w1;
    cin >> h1 >> w1;

    vector<vector<int>> a(h1, vector<int>(w1));
    for (int i = 0; i < h1; i++) {
        for (int j = 0; j < w1; j++) {
            cin >> a.at(i).at(j);
        }
    }

    int h2, w2;
    cin >> h2 >> w2;

    vector<vector<int>> b(h2, vector<int>(w2));
    for (int i = 0; i < h2; i++) {
        for (int j = 0; j < w2; j++) {
            cin >> a.at(i).at(j);
        }
    }

    for (int i = 0; i < h1; i++) {
        for (int j = 0; j < w1; j++) {
            if (a.at(i).at(j) != b.at(0).at(0)) continue;

        }
    }

    cout << "Yes" << endl;
}
