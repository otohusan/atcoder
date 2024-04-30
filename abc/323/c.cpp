#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(M);
    vector<pair<ll, ll>> P;
    for (int i = 0; i < M; i++) {
        int a;
        cin >> a;

        A[i] = a;
        P.push_back({a, i});
    }

    sort(P.begin(), P.end(), greater());

    vector<string> S(N);
    for (auto &s : S)
        cin >> s;

    ll max_user = -1;
    vector<ll> sums(N, 0);

    for (ll i = 0; i < N; i++) {
        sums[i] += i + 1;
        for (ll j = 0; j < M; j++) {
            if (S[i][j] == 'o')
                sums[i] += A[j];
        }
        max_user = max(max_user, sums[i]);
    }

    for (int i = 0; i < N; i++) {
        int ans = 0;
        int q = 0;
        while (sums[i] < max_user) {
            if (S[i][P[q].second] == 'x') {
                sums[i] += P[q].first;
                ans++;
            }

            q++;
        }
        cout << ans << endl;
    }
}
