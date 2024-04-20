#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &n : A)
        cin >> n;

    int ans = 0;
    vector<int> B;
    vector<int> C;
    map<int, int> M;
    map<int, int> Index;
    set<int> S;
    for (int i = 0; i < N; i++) {
        if (A[i] == i + 1)
            continue;

        if (S.count(A[i])) {
            Index[M[A[i]]] = i + 1;
            C.push_back(i + 1);
            continue;
        }

        if (M.count(i + 1)) {
            B.push_back(M[i + 1]);
            B.push_back(i + 1);
            continue;
        }

        ans++;
        B.push_back(i + 1);
        B.push_back(A[i]);
        S.insert(i + 1);
        M[i + 1] = A[i];
    }

    cout << ans << endl;

    for (int i = 0; i < B.size(); i++) {
        cout << B[i] << " " << C[i] << endl;
    }
}
