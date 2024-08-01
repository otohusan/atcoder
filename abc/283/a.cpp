#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int A, B;
    cin >> A >> B;

    ll ans = 1;

    for (int i = 0; i < B; i++) {
        ans *= A;
    }

    cout << ans;
}
