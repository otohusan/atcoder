#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> C(M);
    for (int i = 0; i < M; i++) {
        int v;
        cin >> v;

        for (int j = 0; j < v; j++) {
            int c;
            cin >> c;
            C[i].push_back(c);
        }
    }

    ll count = 0;

    for (int bit = 0; bit < (1 << M); ++bit) {
        vector<bool> ans(N);

        for (int i = 0; i < M; ++i) {
            // i番目のビットが立っている場合、nums[i] を部分集合に含める
            if (bit & (1 << i)) {
                for (auto c : C[i]) {
                    ans[c - 1] = true;
                }
            }
        }

        bool flag = true;

        for (auto a : ans) {
            if (!a) {
                flag = false;
            }
        }

        if (flag) {
            count++;
        }
    }

    cout << count;
}
