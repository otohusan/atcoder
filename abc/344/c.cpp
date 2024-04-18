#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, L, Q;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    cin >> M;
    vector<int> B(M);
    for (auto &a : B)
        cin >> a;
    cin >> L;
    vector<int> C(L);
    for (auto &a : C)
        cin >> a;
    cin >> Q;
    vector<int> X(Q);
    for (auto &a : X)
        cin >> a;

    set<int> S;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int z = 0; z < L; z++) {
                S.insert(A[i] + B[j] + C[z]);
            }
        }
    }

    for (int i = 0; i < Q; i++) {

        cout << (S.count(X[i]) ? "Yes" : "No") << endl;
    }
}
