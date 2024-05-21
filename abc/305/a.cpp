#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;

    for (ll i = 0; i < 101; i++) {
        if ((N + i) % 5 == 0) {
            cout << N + i;
            return 0;
        } else if ((N - i) % 5 == 0) {
            cout << N - i;
            return 0;
        }
    }
}
