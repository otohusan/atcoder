#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;
    vector<ll> H(N);
    for (auto &h : H)
        cin >> h;

    ll ans = 0;

    for (int i = 0; i < N; i++) {
        ans += (H[i] / 5) * 3;
        H[i] = H[i] % 5;

        while (H[i] > 0) {
            ans++;

            if (ans % 3 == 0) {
                H[i] -= 3;
            } else {
                H[i] -= 1;
            }
        }
    }

    cout << ans;
}
