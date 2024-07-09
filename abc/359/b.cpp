#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;

    vector<int> A(N + N);
    for (auto &a : A)
        cin >> a;

    int ans = 0;

    for (int i = 0; i < N + N - 2; i++) {
        if (A[i] == A[i + 2])
            ans++;
    }

    cout << ans;
}
