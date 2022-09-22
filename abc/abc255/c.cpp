//
// Created by 荒井哲也 on 2022/06/11.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    long int X, A, D, N;

    cin >> X >> A >> D >> N;

    long int answer = 0;
    for (long int i = 0; i < N; i++) {
        long int diff;
        long int S = A + D * i;

        if (X > 0 && S > 0) {
            diff = abs(X - S);
        } else if (X < 0 && S < 0) {
            diff = abs(abs(X) - abs(S));
        } else {
            diff = abs(X + S);
        }

        if (answer > diff) {
            answer = diff;

            break;
        }

        answer = diff;
    }

    cout << answer << endl;
}
