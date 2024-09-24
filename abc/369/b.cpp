#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int N;
vector<int> A;
vector<char> S;

ll tryy(int start_left, int start_right) {
    int res = 0;

    for (int i = 0; i < N; i++) {
        if (S[i] == 'L') {
            res += abs(A[i] - start_left);
            start_left = A[i];
        }
        if (S[i] == 'R') {
            res += abs(A[i] - start_right);
            start_right = A[i];
        }
    }

    return (ll)res;
}

int main() {
    cin >> N;
    A.resize(N);
    S.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> S[i];
    }

    ll ans = INF;

    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            ans = min(ans, tryy(i, j));
        }
    }

    cout << ans;
}
