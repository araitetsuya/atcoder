//
// Created by 荒井哲也 on 2022/06/18.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<long long> children;
    vector<long long> adults;
    long long childrenMax = 0;
    long long adultsMax = 0;
    long long childrenMin = 100000000000;
    long long adultsMin = 100000000000;
    for (int i = 0; i < n; i++) {
        long long w;
        cin >> w;

        if (s.at(i) == '0') {
            children.push_back(w);

            childrenMax = max(childrenMax, w);
        } else {
            adults.push_back(w);

            adultsMin = min(adultsMin, w);
        }
    }

    sort(children.begin(), children.end());
    reverse(children.begin(), children.end());
    sort(adults.begin(), adults.end());

    int childrenSize = children.size();
    int adultsSize = adults.size();
    if (childrenSize == 0) {
        cout << adultsSize << endl;
    } else if (adultsSize == 0) {
        cout << childrenSize << endl;
    } else {

        int childrenAnswer = n;
        for (int i = 0; i < childrenSize; i++) {
            if (children.at(i) < adultsMin) break;

            childrenAnswer--;
        }

        int adultsAnswer = n;
        for (int i = 0; i < adultsSize; i++) {
            if (adults.at(i) > childrenMax) break;

            adultsAnswer--;
        }

        if (childrenAnswer > adultsAnswer) {
            cout << childrenAnswer << endl;
        } else {
            cout << adultsAnswer << endl;
        }
    }
}
