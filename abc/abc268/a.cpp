//
// Created by 荒井哲也 on 2022/09/10.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> values(5);

    for (int i = 0; i < 5; i++) {
        cin >> values.at(i);
    }

    vector<int> answers;
    for (int i = 0; i < 5; i++) {
        bool hasValue = false;
        for (int j = 0; j < answers.size(); j++) {
            if (answers.at(j) == values.at(i)) {
                hasValue = true;

                break;
            }
        }

        if (!hasValue) answers.push_back(values.at(i));
    }

    cout << answers.size() << endl;
}
