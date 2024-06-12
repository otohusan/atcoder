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
    for (auto &a : A)
        cin >> a;

    cout << A[0] << " ";

    for (ll i = 1; i < N; i++) {
        if (abs(A[i - 1] - A[i]) < 1) {
            cout << A[i] << " ";
            continue;
        }

        if (A[i - 1] > A[i]) {
            for (ll j = A[i - 1] - 1; j >= A[i]; j--) {
                cout << j << " ";
            }
        } else {
            for (ll j = A[i - 1] + 1; j <= A[i]; j++) {
                cout << j << " ";
            }
        }
    }
}
