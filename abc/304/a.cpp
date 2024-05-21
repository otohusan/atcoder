#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;

    vector<string> A(N);
    ll start_i = 1000000001;
    ll min_n = 1000000001;

    for (ll i = 0; i < N; i++) {
        string a;
        ll n;
        cin >> a >> n;
        A[i] = a;

        if (min_n > n) {
            start_i = i;
            min_n = n;
        }
    }

    for (ll i = 0; i < N; i++) {
        cout << A[(start_i + i) % N] << endl;
    }
}
