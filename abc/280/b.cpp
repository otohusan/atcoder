#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;

    ll sum = 0;

    for (ll i = 0; i < N; i++) {
        ll s;
        cin >> s;

        cout << s - sum << " ";
        sum += s - sum;
    }
}
