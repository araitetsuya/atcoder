//
// Created by 荒井哲也 on 2022/08/13.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> str(7);
    for (int i = 0; i < 7; i++) {
        char c;
            cin >> c;

        if (c == 'a') {
            str.at(i) = 1;
        } else if (c == 't') {
            str.at(i) = 2;
        } else if (c == 'c') {
            str.at(i) = 3;
        } else if (c == 'o') {
            str.at(i) = 4;
        } else if (c == 'd') {
            str.at(i) = 5;
        } else if (c == 'e') {
            str.at(i) = 6;
        } else if (c == 'r') {
            str.at(i) = 7;
        }
    }

    int result = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (str.at(i) > str.at(j)) {
                int number = str.at(i);
                str.at(i) = str.at(j);
                str.at(j) = number;

                result++;
            }
        }
    }

    cout << result << endl;
}
