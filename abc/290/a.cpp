#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for (auto &a : A)
        cin >> a;
    for (auto &a : B)
        cin >> a;

    int ans = 0;
    for (auto b : B) {
        ans += A[b - 1];
    }

    cout << ans;
}
