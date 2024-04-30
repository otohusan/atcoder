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
    for (auto &a : A)
        cin >> a;
    sort(A.begin(), A.end());

    for (int i = 1; i < N + 1; i++) {
        auto it = lower_bound(A.begin(), A.end(), i);
        if (it != A.end()) {
            cout << A[it - A.begin()] - i << endl;
        } else {
            cout << A[M - 1] << endl;
        }
    }
}
