//
// Created by 荒井哲也 on 2022/06/18.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;

    cin >> k;

    int hour = k / 60 == 1;
    int minute =  k % 60;

    if (k / 60 == 1) {
        if (minute < 10) {
            cout << "22:0" + to_string(minute) << endl;
        } else {
            cout << "22:" + to_string(minute) << endl;
        }
    } else {
        if (minute < 10) {
            cout << "21:0" + to_string(minute) << endl;
        } else {
            cout << "21:" + to_string(minute) << endl;
        }
    }
}
