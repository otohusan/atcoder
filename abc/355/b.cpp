#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, M;
    cin >> N >> M;

    set<int> A;
    vector<int> C(N + M);

    for (int i = 0; i < N + M; i++) {
        int j;
        cin >> j;

        if (i < N)
            A.insert(j);

        C[i] = j;
    }

    sort(C.begin(), C.end());

    for (int i = 0; i < N + M - 1; i++) {
        if (A.count(C[i]) == true && A.count(C[i + 1]) == true) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
}
