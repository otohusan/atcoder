#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N), B(M);
    for (auto &a : A)
        cin >> a;
    for (auto &a : B)
        cin >> a;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (ll i = 0; i < N; i++) {
        auto it = lower_bound(B.begin(), B.end(), A[i]);

        if (it != B.end() && M - (it - B.begin()) <= i + 1) {
            cout << A[i];
            return 0;
        }
    }

    cout << B[M - 1] + 1;
}
