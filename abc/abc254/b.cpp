//
// Created by 荒井哲也 on 2022/06/12.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    cin >> N;

    vector A(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j == 0 || i == j) {
                A.at(i).at(j) = 1;
            } else {
                A.at(i).at(j) = A.at(i - 1).at(j - 1) + A.at(i - 1).at(j);
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j != 0) {
                cout << " ";
            }

            cout << A.at(i).at(j);
        }

        cout << endl;
    }
}