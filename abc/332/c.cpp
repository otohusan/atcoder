#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;

    int MT = 0;
    int LT = 0;

    int MTQ = M;
    int LTQ = 0;

    for (int i = 0; i < N; i++) {
        if (S[i] == '0') {
            MTQ = max(MTQ, MT);
            MT = 0;

            LTQ = max(LTQ, LT);
            LT = 0;
        }

        if (S[i] == '1') {
            if (MTQ <= MT && LTQ <= LT) {
                LT++;
                continue;
            }
            if (MTQ > MT) {
                MT++;
                continue;
            }
            LT++;
        }
        if (S[i] == '2') {
            LT++;
        }
    }

    MTQ = max(MTQ, MT);
    LTQ = max(LTQ, LT);

    cout << max(MTQ - M, 0) + LTQ;
}
