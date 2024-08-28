#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, T, P;
    cin >> N >> T >> P;

    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    sort(A.rbegin(), A.rend());

    cout << (T - A[P - 1] > 0 ? T - A[P - 1] : 0);
}
