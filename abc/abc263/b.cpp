//
// Created by 荒井哲也 on 2022/08/06.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n - 1; i++) {
        cin >> p.at(i);
    }

    int generation = 0;
    int key = n - 2;
    bool loop = true;
    while (loop) {
        int parent = p.at(key);

        generation += 1;
        if (parent == 1) {
            loop = false;
        } else {
            key = parent - 2;
        }
    }

    cout << generation << endl;
}
