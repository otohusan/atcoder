#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;
    map<ll, priority_queue<ll, vector<ll>, greater<ll>>> Box;
    vector<int> A(N), W(N);
    for (auto &a : A)
        cin >> a;
    for (auto &a : W)
        cin >> a;
    for (int i = 0; i < N; i++) {
        Box[A[i]].push(W[i]);
    }

    ll ans = 0;

    for (auto box : Box) {
        while (box.second.size() > 1) {
            ans += box.second.top();
            box.second.pop();
        }
    }

    cout << ans;
}
