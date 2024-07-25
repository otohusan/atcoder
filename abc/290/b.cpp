#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N, K;
    cin >> N >> K;

    for (ll i = 0; i < N; i++) {
        char s;
        cin >> s;

        if (s == 'o' && K > 0) {
            cout << 'o';
            K--;
        } else {
            cout << 'x';
        }
        }
}
