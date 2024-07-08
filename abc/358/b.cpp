#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, A;
    cin >> N >> A;

    ll ans = 0;

    for (ll i = 0; i < N; i++) {
        ll t;
        cin >> t;
        if (ans < t) {
            ans = t;
        }

        ans += A;

        cout << ans << endl;
    }
}
