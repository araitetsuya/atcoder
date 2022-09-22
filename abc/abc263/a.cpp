//
// Created by 荒井哲也 on 2022/08/06.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> hands(5);

    for (int i = 0; i < 5; i++) {
        cin >> hands.at(i);
    }

    vector<int> p1;
    vector<int> p2;
    for (int i = 0; i < 5; i++) {
        int hand = hands.at(i);

        if (p1.empty()) {
            p1.push_back(hand);
        } else if (p1.at(0) == hand) {
            p1.push_back(hand);
        } else if (p2.empty()) {
            p2.push_back(hand);
        } else  if (p2.at(0) == hand) {
            p2.push_back(hand);
        }
    }

    if (p1.size() == 2 && p2.size() == 3) {
        cout << "Yes" << endl;
    } else if (p2.size() == 2 && p1.size() == 3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
