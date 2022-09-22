//
// Created by 荒井哲也 on 2022/07/31.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    vector<pair<int, int>> uv(m);
    for(int i = 0; i < m; i++) {
        cin >> uv.at(i).first;
        cin >> uv.at(i).second;
    }

    int answer = 0;
    for (int i = 0; i < m; i++) {
        int pointCount = 2;
        int first = uv.at(i).first;
        int second = uv.at(i).second;
        int third = 0;

        for (int j = i + 1; j < m; j++) {
            if (uv.at(j).first == first || uv.at(j).first == second) {
                third = uv.at(j).second;
            } else if (uv.at(j).second == first || uv.at(j).second == second) {
                third = uv.at(j).first;
            } else {
                continue;
            }

            for (int k = j + 1; k < m; k++) {
                if (uv.at(k).first != first && uv.at(k).first != second && uv.at(k).first != third) continue;
                if (uv.at(k).second != first && uv.at(k).second != second && uv.at(k).second != third) continue;

                answer++;
            }
        }
    }

    cout << answer << endl;
}
