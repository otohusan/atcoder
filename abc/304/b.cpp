#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;

    if (N >= 100000000) {
        N /= 1000000;
        N *= 1000000;
        cout << N;
        return 0;
    }
    if (N >= 10000000) {
        N /= 100000;
        N *= 100000;
        cout << N;
        return 0;
    }
    if (N >= 1000000) {
        N /= 10000;
        N *= 10000;
        cout << N;
        return 0;
    }
    if (N >= 100000) {
        N /= 1000;
        N *= 1000;
        cout << N;
        return 0;
    }
    if (N >= 10000) {
        N /= 100;
        N *= 100;
        cout << N;
        return 0;
    }
    if (N >= 1000) {
        N /= 10;
        N *= 10;
        cout << N;
        return 0;
    }

    cout << N;
}
