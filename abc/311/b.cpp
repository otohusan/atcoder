#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, D;
    cin >> N >> D;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;

    ll count = 0;
    ll ans = -1;

    for (ll i = 0; i < D; i++) {
        bool flag = true;
        for (ll j = 0; j < N; j++) {
            if (S[j][i] == 'x') {
                count = 0;
                flag = false;
            }
        }

        if (flag)
            count++;
        ans = max(ans, count);
    }

    cout << ans;
}
