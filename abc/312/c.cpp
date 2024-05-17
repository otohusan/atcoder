#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A;
    for (int i = 0; i < N; i++) {
        ll a;
        cin >> a;
        A.push_back(a);
    }
    for (int i = 0; i < M; i++) {
        ll a;
        cin >> a;
        A.push_back(a + 1);
    }

    sort(A.begin(), A.end());

    cout << A[M - 1];
}
