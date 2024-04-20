#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll N;
    cin >> N;
    vector<vector<ll>> G(N);
    int start = 0;

    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;

        if (A == -1) {
            start = i;
            continue;
        }

        G[A - 1].push_back(i);
    }

    stack<int> S;
    S.push(start);

    while (!S.empty()) {
        int v = S.top();
        S.pop();

        cout << v + 1 << " ";

        for (auto g : G[v]) {

            S.push(g);
        }
    }
}
