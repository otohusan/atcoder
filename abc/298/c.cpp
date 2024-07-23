#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, Q;
    cin >> N >> Q;

    map<ll, set<ll>> Card;
    map<ll, priority_queue<ll, vector<ll>, greater<ll>>> Box;

    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;

        if (q == 1) {
            int i, j;
            cin >> i >> j;

            Card[i].insert(j);
            Box[j].push(i);
        }

        if (q == 2) {
            int i;
            cin >> i;
            priority_queue<ll, vector<ll>, greater<ll>> q = Box[i];
            while (!q.empty()) {
                cout << q.top() << " ";
                q.pop();
            }
            cout << endl;
        }

        if (q == 3) {
            int i;
            cin >> i;
            for (auto s : Card[i]) {
                cout << s << " ";
            }
            cout << endl;
        }
    }
}
