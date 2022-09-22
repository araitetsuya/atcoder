//
// Created by 荒井哲也 on 2022/06/18.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x.at(i);
    }

    pair<int, int> cy(m);
    for (int i = 0; i < n; i++) {
        cin >> cy.first;
        cin >> cy.second;
    }

    cout << k << endl;
}
