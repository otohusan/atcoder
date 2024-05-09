#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, H, X, P[111];
    cin >> N >> H >> X;
    for (int n = 1; n <= N; n++)
        cin >> P[n];
    for (int n = 1; n <= N; n++) {
        if (H + P[n] >= X) {
            cout << n << endl;
            break;
        }
    }
}
