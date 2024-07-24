#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> ans(N, 0);

    for (int i = 0; i < Q; i++) {
        int q, x;
        cin >> q >> x;
        x--;

        if (q == 1) {
            ans[x]++;
        }

        if (q == 2) {
            ans[x] += 2;
        }

        if (q == 3) {
            cout << (ans[x] >= 2 ? "Yes" : "No") << endl;
        }
    }
}
