#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, M;
    cin >> N >> M;

    vector<string> S(N);
    for (auto &s : S)
        cin >> s;

    int res = 1000000;

    for (int bit = 0; bit < (1 << N); ++bit) {
        vector<bool> ans(M, false);
        int thisres = 0;

        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)) {
                thisres++;

                for (int j = 0; j < M; j++) {
                    if (S[i][j] == 'o')
                        ans[j] = true;
                }
            }
        }

        bool flag = true;

        for (auto a : ans) {
            if (!a)
                flag = false;
        }

        if (flag)
            res = min(res, thisres);
    }

    cout << res;
}
