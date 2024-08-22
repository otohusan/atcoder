#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;

    ll s = accumulate(A.begin(), A.end(), 0ll);
    if (s <= M) {
        cout << "infinite" << endl;
        return 0;
    }

    sort(A.begin(), A.end());

    vector<ll> R(N);
    R[0] = A[0];
    for (ll i = 0; i < N - 1; i++) {
        R[i + 1] = R[i] + A[i + 1];
    }

    ll ans = M / N;

    for (ll i = 0; i < N; i++) {
        ll sum = R[i] + (R.size() - (i + 1)) * A[i];

        int add = 0;

        if (sum <= M) {
            if (M % sum >= N - (i + 1))
                add = (M - sum) / (N - (i + 1));

            ans = max(ans, A[i] + add);
        }
    }

    cout << ans;
}
