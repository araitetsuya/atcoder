//
// Created by 荒井哲也 on 2022/06/11.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;

    cin >> N >> K;

    vector<int> AList(K);
    for (int i = 0; i < K; i++) {
        cin >> AList.at(i);
    }

    vector<vector<long int>> UserList(N - K, vector<long int>(2));
    vector<vector<long int>> LightList(K, vector<long int>(2));
    int UserCount = 0;
    int LightCount = 0;
    for (int i = 0; i < N; i++) {
        if (LightCount + 1 > AList.size()) {
            cin >> UserList.at(UserCount).at(0) >> UserList.at(UserCount).at(1);

            UserCount++;

            continue;
        }

        if (i == AList.at(LightCount) - 1) {
            cin >> LightList.at(LightCount).at(0) >> LightList.at(LightCount).at(1);

            LightCount++;
        } else {
            cin >> UserList.at(UserCount).at(0) >> UserList.at(UserCount).at(1);

            UserCount++;
        }
    }

    double R = 0;
    for (int i = 0; i < LightList.size(); i++) {
        for (int j = 0; j < UserList.size(); j++) {
            long int xDiff = LightList.at(i).at(0) - UserList.at(j).at(0);
            long int yDiff = LightList.at(i).at(1) - UserList.at(j).at(1);
            long double diff = sqrt(xDiff * xDiff + yDiff + yDiff);

            if (diff > R) {
                R = diff;
            }
        }
    }

    cout << R << endl;
}