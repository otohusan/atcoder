#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, M;
    cin >> N >> M;
    queue<int> Q;
    for (int i = 0; i < M; i++) {
        int q;
        cin >> q;
        Q.push(q);
    }

    stack<int> S;

    for (int i = 0; i < N; i++) {
        if (Q.front() == i + 1) {
            S.push(Q.front());
            Q.pop();
            continue;
        }

        cout << i + 1 << " ";

        while (!S.empty()) {
            cout << S.top() << " ";
            S.pop();
        }
    }
}
