#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, K;
    cin >> N >> K;
    map<ll, bool> A;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A[a] = true;
    }

    int ans = K;

    for (int i = 0; i < K; i++) {
        if (A[i] == false)
            ans = min(ans, i);
    }

    cout << ans;
}
