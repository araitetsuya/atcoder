//
// Created by 荒井哲也 on 2022/08/06.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    vector<vector<int>> a(m - n + 1, <vector>(m - n + 1));
    for (int i = 0; i < m - n + 1; i++) {
        for (int j = 0; j < m - n + 1; j++) {
            a.at(i).at(j) = i + j + 1;
        }
    }

    for (int i = 0; i < m - n + 1; i++) {
    }

    for (int i = 0; i < m - n + 1; i++) {
        third.at(i) = i + 1;
    }
}
