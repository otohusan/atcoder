#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int Q;
    cin >> Q;

    map<int, int> M;
    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;

        if (q == 1) {
            int x;
            cin >> x;

            M[x]++;
        }
        if (q == 2) {
            int x;
            cin >> x;

            M[x]--;
            if (M[x] == 0)
                M.erase(x);
        }
        if (q == 3) {
            cout << M.size() << endl;
        }
    }
}
