#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;

    sort(A.begin(), A.end());

    int v = A[0];

    for (int i = 1; i < N; i++) {
        if (v + 1 != A[i]) {
            cout << v + 1;
            return 0;
        }

        v = A[i];
    }
}
