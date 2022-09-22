//
// Created by 荒井哲也 on 2022/08/21.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<char>> g(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> g.at(i).at(j);
        }
    }

    pair<int, int> now(0, 0);
    vector<vector<bool>> log(h, vector<bool>(w, false));
    while (true) {
        int hn = now.first;
        int wn = now.second;

        if (log.at(hn).at(wn)) {
            cout << -1 << endl;

            return 0;
        } else {
            log.at(hn).at(wn) = true;
        }

        char gn = g.at(hn).at(wn);

        if (gn == 'U' && hn != 0) {
            now.first -= 1;
        } else if (gn == 'D' && hn != h - 1) {
            now.first += 1;
        } else if (gn == 'L' && wn != 0) {
            now.second -= 1;
        } else if (gn == 'R' && wn != w - 1) {
            now.second += 1;
        } else {
            break;
        }
    }

    cout << now.first + 1 << ' ' << now.second + 1 << endl;
}
