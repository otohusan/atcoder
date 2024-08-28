#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

// 線形で解くパターン
int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    for (auto &a : A)
        cin >> a;

    ll s = accumulate(A.begin(), A.end(), 0ll);
    if (s <= M) {
        cout << "infinite" << endl;
        return 0;
    }

    int ok = 0, ng = 1000000000;
    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) >> 1;
        ll tmp = 0;
        for (auto v : A)
            tmp += min(mid, v);
        if (tmp <= M)
            ok = mid;
        else
            ng = mid;
    }
    cout << ok << endl;
}
