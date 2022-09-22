//
// Created by 荒井哲也 on 2022/06/18.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxValue = 0;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char input;
            cin >> input;

            a.at(i).at(j) = input - '0';

            if (a.at(i).at(j) > maxValue) maxValue = a.at(i).at(j);
        }
    }

    long long answer = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a.at(i).at(j) < maxValue) continue;

            vector<long long> values(8);
            for (int k = 0; k < n - 1; k++) {
                int key1 = i;
                int key2 = j == n - 2 ? 0 : j + 1;

                values.at(0) += a.at(key1).at(key2) * pow(10, n - 2 - k);
            }

            for (int k = 0; k < n - 1; k++) {
                int key1 = i == n - 2 ? 0 : i + 1;
                int key2 = j == 0 ? n - 1 : j - 1;

                values.at(1) += a.at(key1).at(key2) * pow(10, n - 2 - k);
            }

            for (int k = 0; k < n - 1; k++) {
                int key1 = i == n - 2 ? 0 : i + 1;
                int key2 = j;

                values.at(2) += a.at(key1).at(key2) * pow(10, n - 2 - k);
            }

            for (int k = 0; k < n - 1; k++) {
                int key1 = i == n - 2 ? 0 : i + 1 ;
                int key2 = j == n - 2 ? 0 : j + 1;

                values.at(3) += a.at(key1).at(key2) * pow(10, n - 2 - k);
            }

            for (int k = 0; k < n - 1; k++) {
                int key1 = i;
                int key2 = j == n - 2 ? 0 : j + 1;

                values.at(4) += a.at(key1).at(key2) * pow(10, n - 2 - k);
            }

            for (int k = 0; k < n - 1; k++) {
                int key1 = i == 0 ? n - 1 : i - 1;
                int key2 = j == n - 2 ? 0 : j + 1;

                values.at(5) += a.at(key1).at(key2) * pow(10, n - 2 - k);
            }

            for (int k = 0; k < n - 1; k++) {
                int key1 = i == 0 ? n - 1 : i - 1;
                int key2 = j;

                values.at(6) += a.at(key1).at(key2) * pow(10, n - 2 - k);
            }

            for (int k = 0; k < n - 1; k++) {
                int key1 = i == 0 ? n - 1 : i - 1;
                int key2 = j == 0 ? n - 1 : j - 1;

                values.at(7) += a.at(key1).at(key2) * pow(10, n - 2 - k);
            }

            long long selected = *max_element(values.begin(), values.end());
            long long sum = a.at(i).at(j) * pow(10, n - 1)  + selected;

            answer = max(answer, sum);
        }
    }

    cout << answer << endl;
}
