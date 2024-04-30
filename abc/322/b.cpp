#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;
    string S, T;
    cin >> S >> T;

    bool pre = true, suf = true;

    for (int i = 0; i < N; i++) {
        if (S[i] != T[i])
            pre = false;
    }

    for (int i = 0; i < N; i++) {
        if (S[i] != T[M - N + i])
            suf = false;
    }

    if (suf && pre) {
        cout << 0;
    }
    if (!suf && pre) {
        cout << 1;
    }
    if (suf && !pre) {
        cout << 2;
    }
    if (!suf && !pre) {
        cout << 3;
    }
}
