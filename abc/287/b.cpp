#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> S(N), T(M);
    for (auto &s : S)
        cin >> s;
    for (auto &s : T)
        cin >> s;
    int ans = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            bool flag = true;
            for (int z = 0; z < 3; z++) {
                if (S[i][z + 3] != T[j][z]) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                ans++;
                break;
            }
        }
    }

    cout << ans;
}
