#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    vector<pair<ll, ll>> A(N);
    for (int i = 0; i < N; i++) {
        ll a;
        cin >> a;

        A[i] = {a, i};
    }

    sort(A.begin(), A.end());

    cout << A[N - 2].second + 1;
}
