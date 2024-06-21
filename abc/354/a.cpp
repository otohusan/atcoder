#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll H;
    cin >> H;

    ll v = 0;

    for (int i = 0;; i++) {
        ll p = 1;
        for (int j = 0; j < i; j++) {
            p *= 2;
        }

        v += p;

        if (v > H) {
            cout << i + 1;
            return 0;
        }
    }
}
