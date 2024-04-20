#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;

    vector<ll> D(N);
    for (auto &d : D)
        cin >> d;

    ll min_date = 10000000001, max_date = -1, min_len = 10000000001;

    for (ll i = 0; i < N; i++) {
        ll x = (D[i]) % (A + B);
        if (x >= A)
            x = x - (A + B);

        min_date = min(x, min_date);
        max_date = max(x, max_date);
    }

    bool ans = max_date - min_date + 1 <= A;

    cout << (ans ? "Yes" : "No");
}
