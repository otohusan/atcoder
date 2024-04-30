#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;

    while (N % 3 == 0 && N > 0) {
        N /= 3;
    }

    while (N % 2 == 0 && N > 0) {
        N /= 2;
    }

    cout << (N / 2 == 0 ? "Yes" : "No");
}
