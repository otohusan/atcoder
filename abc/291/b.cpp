#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;
    vector<ll> A(N * 5);
    for (auto &a : A)
        cin >> a;

    sort(A.begin(), A.end());

    ll ans = 0;

    for (ll i = N; i < 4 * N; i++) {
        ans += A[i];
    }

    cout << ans / (long double)(N * 3);
}
