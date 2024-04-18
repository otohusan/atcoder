#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> M;

    for (int i = 0; i < N; i++) {
        int a, c;
        cin >> a >> c;

        if (!M[c])
            M[c] = 1000000001;

        M[c] = min(a, M[c]);
    }

    int ans = 0;
    for (auto m : M) {
        ans = max(ans, m.second);
    }

    cout << ans;
}
