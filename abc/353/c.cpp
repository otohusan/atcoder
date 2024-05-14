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
    ll ans = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        // 全部(N-1)回ずつ登場するから、これで総計を求められる
        ans += A[i] * (N - 1);
    }

    ll MOD = 100000000;

    sort(A.begin(), A.end());

    ll r = N;

    ll cnt = 0;

    // これは尺取法てきなの、逆からくるパターンもあるらしい
    for (ll i = 0; i < N - 1; i++) {
        // 行き過ぎたやつを戻してるってことか
        r = max(r, i + 1);
        while (A[i] + A[r - 1] >= MOD && r - 1 > i) {
            r--;
        }
        // Nからどれだけ進んでるかをカウント
        cnt += N - r;
    }

    ans -= MOD * cnt;

    cout << ans << endl;
    return 0;
}
