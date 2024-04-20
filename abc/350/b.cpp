#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<bool> B(N);

    for (int i = 0; i < Q; i++) {
        int t;
        cin >> t;
        t--;

        B[t] = !B[t];
    }

    int ans = 0;
    for (auto b : B) {
        if (!b) {
            ans++;
        }
    }

    cout << ans;
}
