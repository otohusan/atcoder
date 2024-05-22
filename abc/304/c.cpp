#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

bool detect(ll i_x, ll i_y, ll d_x, ll d_y, ll D) {
    ll v = (i_x - d_x) * (i_x - d_x) + (i_y - d_y) * (i_y - d_y);

    if (v <= D * D) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ll N, D;
    cin >> N >> D;

    vector<ll> X(N);
    vector<ll> Y(N);
    for (ll i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    stack<ll> S;
    vector<bool> ans(N);

    S.push(0);
    ans[0] = true;

    while (!S.empty()) {
        ll i_i = S.top();
        S.pop();

        for (ll i = 0; i < N; i++) {
            if (ans[i] == true)
                continue;

            if (detect(X[i_i], Y[i_i], X[i], Y[i], D)) {
                S.push(i);
                ans[i] = true;
            }
        }
    }

    for (auto a : ans)
        cout << (a == true ? "Yes" : "No") << endl;
}
