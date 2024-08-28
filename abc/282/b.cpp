#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (auto &s : S)
        cin >> s;

    int ans = 0;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int x = 0; x < M; x++) {
                if (S[i][x] == 'x' && S[j][x] == 'x') {
                    ans--;
                    break;
                }
            }
            ans++;
        }
    }

    cout << ans;
}
