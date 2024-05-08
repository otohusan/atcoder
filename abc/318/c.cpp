#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, D, P;
    cin >> N >> D >> P;
    vector<ll> F(N);
    for (auto &f : F)
        cin >> f;
    sort(F.begin(), F.end());

    ll ans = 0;

    ll count = 0;
    ll f_sum = 0;
    for (ll i = N - 1; i >= 0; i--) {
        f_sum += F[i];
        count++;

        if (count % D == 0) {
            ans += min(f_sum, P);
            f_sum = 0;
        }
    }

    ans += min(f_sum, P);

    cout << ans;
}
