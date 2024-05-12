#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    vector<pair<ll, ll>> I(N);
    for (ll i = 0; i < N; i++) {
        ll F, S;
        cin >> F >> S;
        I[i] = {S, F};
    }

    sort(I.rbegin(), I.rend());

    ll ans = 0;
    ans += I[0].first;
    ll max_first = -1;

    for (int i = 1; i < N; i++) {
        ll v = -1;
        if (I[0].second == I[i].second) {
            v = I[i].first / 2;
        } else {
            v = I[i].first;
        }

        max_first = max(max_first, v);
    }

    cout << ans + max_first;
}
