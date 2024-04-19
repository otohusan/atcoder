#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<ll, ll> dp;

ll f(ll a) {
    if (a == 1)
        return 0;

    if (dp.count(a)) {
        return dp[a];
    }

    if (a % 2 == 0) {
        return dp[a] = f(a / 2) + f(a / 2) + a;
    } else {
        return dp[a] = f(a / 2) + f(a / 2 + 1) + a;
    }
}

int main() {
    ll N;
    cin >> N;

    ll ans = f(N);
    cout << ans;
}
