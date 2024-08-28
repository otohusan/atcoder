#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, W;
    cin >> N >> W;
    vector<string> G(N);
    for (auto &g : G)
        cin >> g;

    int ans = 0;

    for (int i = 0; i < N; i++) {
        for (auto g : G[i])
            if (g == '#')
                ans++;
    }

    cout << ans;
}
