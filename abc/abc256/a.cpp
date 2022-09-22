//
// Created by 荒井哲也 on 2022/06/18.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C;

    cin >> R >> C;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int A;

            cin >> A;

            if (i == R - 1 && j == C - 1) {
                cout << A << endl;
            }
        }
    }
}
