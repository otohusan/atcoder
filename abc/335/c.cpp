#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<pair<int, int>> R;
    R.push_back({1, 0});

    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;

        if (q == 1) {
            char D;
            cin >> D;

            if (D == 'U')
                R.push_back({R[R.size() - 1].first + dx[0],
                             R[R.size() - 1].second + dy[0]});
            if (D == 'R')
                R.push_back({R[R.size() - 1].first + dx[1],
                             R[R.size() - 1].second + dy[1]});
            if (D == 'D')
                R.push_back({R[R.size() - 1].first + dx[2],
                             R[R.size() - 1].second + dy[2]});
            if (D == 'L')
                R.push_back({R[R.size() - 1].first + dx[3],
                             R[R.size() - 1].second + dy[3]});
        }

        if (q == 2) {
            int p;
            cin >> p;

            if (p > R.size()) {
                cout << p - R.size() + 1 << " " << 0 << endl;
                continue;
            }

            int hiku = 0;

            if (p > R.size()) {
                hiku = R.size() - 1;
            } else {
                hiku = p;
            }

            cout << p + R[R.size() - p].first - hiku << " "
                 << R[R.size() - p].second << endl;
        }
    }
}
