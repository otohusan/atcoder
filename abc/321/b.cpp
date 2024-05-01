#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, X;
    cin >> N >> X;
    vector<ll> A(N - 1);
    for (auto &a : A)
        cin >> a;
    int ans = -1;

    vector<ll> A_s = A;

    for (int i = 0; i < 101; i++) {
        A = A_s;
        A.push_back(i);
        sort(A.begin(), A.end());

        int sum = 0;

        for (int j = 1; j < N - 1; j++) {
            sum += A[j];
        }

        if (sum >= X) {
            ans = i;
            break;
        }
    }

    cout << ans;
}
