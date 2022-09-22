//
// Created by 荒井哲也 on 2022/06/12.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;

    cin >> h >> w;

    vector<int> start(2);
    vector<int> end(2);
    bool hasStart = false;
    for (int i = 0; i < h; i++) {
        string row;
        cin >> row;

        for (int j = 0; j < w; j++) {
            if (row.at(j) != 'o') continue;

            if (hasStart) {
                end.at(0) = i;
                end.at(1) = j;
            } else {
                start.at(0) = i;
                start.at(1) = j;

                hasStart = true;
            }
        }
    }

    cout << abs(start.at(0) - end.at(0)) + abs(start.at(1) - end.at(1)) << endl;
}