#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> G(N);
    for (ll i = 0; i < M; i++) {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;

        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<bool> used(N);
    stack<ll> S;

    ll ans = 0;

    for (ll i = 0; i < N; i++) {
        if (used[i])
            continue;

        ans++;
        S.push(i);
        used[i] = true;

        while (!S.empty()) {
            ll next = S.top();
            S.pop();

            for (auto n : G[next]) {
                if (used[n])
                    continue;
                S.push(n);
                used[n] = true;
            }
        }
    }

    cout << ans;
}
