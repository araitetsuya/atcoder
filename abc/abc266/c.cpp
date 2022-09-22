//
// Created by 荒井哲也 on 2022/08/27.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> points(4, vector<int>(2));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cin << point.at(i).at(j);
        }
    }

    int ax = points.at(0).at(0);
    int ay = points.at(0).at(1);
    int bx = points.at(1).at(0);
    int by = points.at(1).at(1);
    int cx = points.at(2).at(0);
    int cy = points.at(2).at(1);
    int dx = points.at(3).at(0);
    int dy = points.at(3).at(1);

    int abTile = (ax - bx) / (ay - by);
    int abSlice = ay - (abTile * ax);

    string answer = "No";
    if (ax -cx > 0) {
        if (by > dy) {
            if (dy < (abTile * cx) + abSlice) answer = "Yes";
        } else {
            if (dy > (abTile * cx) + abSlice) answer = "Yes";
        }
    } else {
        if (by > dy) {
            if (dy < (abTile * cx) + abSlice) answer = "Yes";
        } else {
            if (dy > (abTile * cx) + abSlice) answer = "Yes";
        }
    }

    cout << answer << endl;
}
