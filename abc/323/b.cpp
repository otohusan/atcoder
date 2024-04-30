#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {1, 0, -1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    map<ll, vector<ll>> M;

    for (int i = 0; i < N; i++) {
        int v = 0;
        for (int j = 0; j < N; j++) {
            if (S[i][j] == 'o')
                v++;
        }

        M[v].push_back(i + 1);
    }

    for (auto it = M.rbegin(); it != M.rend(); ++it) {
        for (int i = 0; i < it->second.size(); i++) {
            cout << it->second[i] << " ";
        }
    }
}
