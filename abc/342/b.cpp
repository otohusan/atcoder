#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;
    vector<int> P(N);
    for (auto &p : P)
        cin >> p;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int a, b;
        cin >> a >> b;

        for (int j = 0; j < N; j++) {
            if (P[j] == a) {
                cout << a << endl;
                break;
            }
            if (P[j] == b) {
                cout << b << endl;
                break;
            }
        }
    }
}
