#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;

    ll ans = 0;
    for (ll i = 0; i < N; i++) {
        ans += A[i];

        if (ans < 0)
            ans = 0;
    }

    cout << ans;
}
