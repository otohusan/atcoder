#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    ll sum = 0;
    for (auto &a : A) {
        cin >> a;
        sum += a;
    }

    vector<ll> B(N, sum / N);

    sort(A.begin(), A.end());

    for (int i = 0; i < sum % N; i++) {
        B[N - 1 - i]++;
    }

    ll ans = 0;

    for (int i = 0; i < N; i++) {
        ans += abs(A[i] - B[i]);
    }

    cout << ans / 2;
}
