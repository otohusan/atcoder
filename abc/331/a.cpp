#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;
    d++;
    if (d > D) {
        m++;
        d = 1;
    }
    if (m > M) {
        y++;
        m = 1;
    }

    cout << y << " " << m << " " << d;
}
