#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 1;
        return 0;
    }

    if ((a + b) % 2 == 0) {
        cout << 3;
    } else {
        cout << 2;
    }
}
