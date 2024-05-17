#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

bool compare(vector<ll> cheep, vector<ll> expensive) {
    set<ll> S;

    for (int i = 0; i < cheep[1]; i++) {
        S.insert(cheep[i + 2]);
    }

    ll c_size = S.size();

    for (int i = 0; i < expensive[1]; i++) {
        S.insert(expensive[i + 2]);
    }

    if (c_size == S.size() && cheep[0] <= expensive[0] && cheep != expensive) {
        return false;
    } else {
        return true;
    }
}

int main() {
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> A(N);
    for (auto &a : A) {
        int i, c;
        cin >> i >> c;
        a.push_back(i);
        a.push_back(c);
        for (int j = 0; j < c; j++) {
            int p;
            cin >> p;
            a.push_back(p);
        }
    }

    for (ll i = 0; i < N - 1; i++) {
        for (ll j = i + 1; j < N; j++) {
            bool ans = true;
            bool ans1 = true;

            if (A[i][0] <= A[j][0]) {
                ans = compare(A[i], A[j]);
            }
            if (A[i][0] >= A[j][0]) {
                ans1 = compare(A[j], A[i]);
            }

            if (!ans || !ans1) {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";
}
