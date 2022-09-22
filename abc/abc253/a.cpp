//
// Created by 荒井哲也 on 2022/06/12.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if ((a >= b && b >= c) || (c >= b && b >= a)) cout << "Yes" << endl;
    else cout << "No" << endl;
}