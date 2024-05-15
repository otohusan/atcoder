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
    vector<ll> ans(N);

    for (ll i = 0; i < M; i++) {
        ll A, B;
        cin >> A >> B;
        A--;
        B--;

        G[A].push_back(B);
    }

    for (ll i = 0; i < N; i++) {
        ll start = i;

        stack<ll> S;
        S.push(start);

        vector<bool> memo(N);

        while (!S.empty()) {
            ll next = S.top();
            S.pop();
            if (memo[next])
                continue;

            for (auto g : G[next]) {
                ans[g]++;
                S.push(g);
                memo[g] = true;
            }
        }
    }

    vector<ll> res;
    for (int i = 0; i < N; i++) {
        if (ans[i] == 0) {
            res.push_back(i + 1);
        }
    }

    if (res.size() != 1) {
        cout << -1;
    } else {
        cout << res[0];
    }
}
