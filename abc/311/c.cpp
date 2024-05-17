#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N, -1);
    for (auto &a : A) {
        cin >> a;
        a--;
    }

    vector<bool> memo(N);

    ll start = 0;

    bool flag = true;

    while (flag) {
        if (memo[start] == true) {
            break;
        }
        memo[start] = true;
        start = A[start];
    }

    vector<ll> res;
    res.push_back(start);
    start = A[start];

    while (flag) {
        if (start == res[0]) {
            break;
        }

        res.push_back(start);
        start = A[start];
    }

    cout << res.size() << endl;

    for (auto r : res)
        cout << r + 1 << " ";
}
