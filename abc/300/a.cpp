#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    for (int i = 0; i < N; i++) {
        int C;
        cin >> C;

        if (A + B == C) {
            cout << i + 1;
            return 0;
        }
    }
}
