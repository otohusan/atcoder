#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;

    sort(A.begin(), A.end());

    ll ans = -1;

    for (int i = 0; i < N; i++) {
        auto it = lower_bound(A.begin() + i, A.end(), A[i] + M);

        if (it != A.end()) {
            ll dif = it - (A.begin() + i);

            ans = max(ans, dif);
        } else {
            ll z = A.size() - i;
            ans = max(ans, z);
            continue;
        }
    }

    cout << ans;
}
