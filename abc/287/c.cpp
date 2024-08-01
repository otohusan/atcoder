#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;
    if (M > N - 1) {
        cout << "No";
        return 0;
    }

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

    queue<ll> Q;
    Q.push(0);
    used[0] = true;

    while (!Q.empty()) {
        ll next = Q.front();
        Q.pop();

        if (G[next].size() > 2) {
            cout << "No";
            return 0;
        }

        for (auto n : G[next]) {

            if (used[n])
                continue;

            Q.push(n);
            used[n] = true;
        }
    }

    for (auto a : used) {
        if (!a) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
}
