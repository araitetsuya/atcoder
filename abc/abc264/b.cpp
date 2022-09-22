//
// Created by 荒井哲也 on 2022/08/13.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    if (r == 1 || r == 15) {
        cout << "black" << endl;
    } else if (r == 2 || r == 14) {
        if (c == 1 || c == 15) {
            cout << "black" << endl;
        } else {
            cout << "white" << endl;
        }
    } else if (r == 3 || r == 13) {
        if (c == 2 || c == 14) {
            cout << "white" << endl;
        } else {
            cout << "black" << endl;
        }
    } else if (r == 4 || r == 12) {
        if (c == 1 || c == 3 || c == 13 || c == 15) {
            cout << "black" << endl;
        } else {
            cout << "white" << endl;
        }
    } else if (r == 5 || r == 11) {
        if (c == 2 || c == 4 || c == 12 || c == 14) {
            cout << "white" << endl;
        } else {
            cout << "black" << endl;
        }
    } else if (r == 6 || r == 10) {
        if (c == 1 || c == 3 || c == 5 || c == 11 || c == 13 || c == 15) {
            cout << "black" << endl;
        } else {
            cout << "white" << endl;
        }
    } else if (r == 7 || r == 9) {
        if (c == 2 || c == 4 || c == 6 || c == 10 || c == 12 || c == 14) {
            cout << "white" << endl;
        } else {
            cout << "black" << endl;
        }
    } else if (r == 8) {
        if (c == 1 || c == 3 || c == 5 || c == 7 || c == 9 || c == 11 || c == 13 || c == 15) {
            cout << "black" << endl;
        } else {
            cout << "white" << endl;
        }
    }
}
