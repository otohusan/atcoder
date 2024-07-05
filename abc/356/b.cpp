#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, M;
    cin >> N >> M;

    vector<ll> A(M);
    for (auto &a : A)
        cin >> a;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int v;
            cin >> v;

            A[j] -= v;
        }
    }

    for (auto a : A) {
        if (a > 0) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
}
