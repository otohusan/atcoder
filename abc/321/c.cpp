#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll K;
    cin >> K;

    vector<ll> ans;

    for (ll bit = 2; bit < (1 << 10); bit++) {
        ll x = 0;
        for (ll j = 9; j >= 0; j--) {
            if (bit & (1 << j)) {
                x *= 10;
                x += j;
            }
        }
        ans.push_back(x);
    }

    sort(ans.begin(), ans.end());

    cout << ans[K - 1];
}
