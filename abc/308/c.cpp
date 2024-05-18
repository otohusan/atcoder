#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    map<ld, vector<ll>> M;
    for (int i = 0; i < N; i++) {
        ll a, b;
        cin >> a >> b;

        A[i] = a;
        B[i] = b;

        M[-(ld(a) / (a + b))].push_back(i);
    }

    for (auto m : M) {
        for (auto s : m.second) {
            cout << s + 1 << " ";
        }
    }
}
