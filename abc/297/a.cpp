#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, D;
    cin >> N >> D;

    int p_v;
    cin >> p_v;

    for (int i = 0; i < N - 1; i++) {
        int v;
        cin >> v;

        if (v - p_v <= D) {
            cout << v;
            return 0;
        }

        p_v = v;
    }

    cout << "-1";
}
