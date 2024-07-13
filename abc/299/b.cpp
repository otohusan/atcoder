#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, T;
    cin >> N >> T;
    vector<ll> C(N);
    vector<ll> R(N);
    for (auto &c : C)
        cin >> c;
    for (auto &c : R)
        cin >> c;

    ll base_int = C[0];
    ll res = -1;
    ll max_r = -1;

    for (auto c : C) {
        if (c == T)
            base_int = T;
    }

    for (ll i = 0; i < N; i++) {
        if (C[i] == base_int && R[i] > max_r) {
            max_r = R[i];
            res = i + 1;
        }
    }

    cout << res;
}
