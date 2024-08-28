#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, K;
    cin >> N >> K;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;

    sort(A.begin(), A.end());

    ll ans = INF;

    for (int i = 0; i < N; i++) {
        if (i + N - K - 1 >= N)
            continue;

        ans = min(A[i + N - K - 1] - A[i], ans);
    }

    cout << ans;
}
