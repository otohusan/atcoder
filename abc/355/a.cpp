#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    set<ll> S;
    S.insert(1);
    S.insert(2);
    S.insert(3);

    for (int i = 0; i < 2; i++) {
        int a;
        cin >> a;

        if (S.count(a)) {
            S.erase(a);
        }
    }

    if (!(S.size() == 1)) {
        cout << -1;
    } else {
        for (auto s : S) {
            cout << s;
        }
    }
}
