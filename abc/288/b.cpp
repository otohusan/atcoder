#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(M);
    for (auto &n : S)
        cin >> n;

    sort(S.begin(), S.end());

    for (int i = 0; i < M; i++) {
        cout << S[i] << endl;
    }
}
