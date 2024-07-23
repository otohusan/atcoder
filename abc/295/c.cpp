#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    map<ll, ll> M;

    for (ll i = 0; i < N; i++) {
        ll a;
        cin >> a;

        M[a]++;
    }

    ll ans = 0;
    for (auto m : M) {
        ans += m.second / 2;
    }

    cout << ans;
}
