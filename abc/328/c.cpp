#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    vector<ll> R(N);
    R[0] = 0;

    for (ll i = 1; i < N; i++) {
        if (S[i] == S[i - 1]) {
            R[i] = R[i - 1] + 1;
        } else {
            R[i] = R[i - 1];
        }
    }

    for (int i = 0; i < Q; i++) {
        ll l, r;
        cin >> l >> r;

        cout << R[r - 1] - R[l - 1] << endl;
    }
}
