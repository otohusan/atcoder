#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    for (int i = N - K; i < N; i++) {
        cout << A[i] << " ";
    }

    for (int i = 0; i < N - K; i++) {
        cout << A[i] << " ";
    }
}
