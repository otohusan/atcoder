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

    map<int, int> Index;
    for (int i = 0; i < N; i++) {
        Index[A[i]] = i;
    }

    for (int i = 0; i < N; i++) {
        if (A[i] == i + 1)
            continue;

        ans++;
        B.push_back(Index[i + 1] + 1);
        C.push_back(i + 1);

        int v = 0;
        v = A[i];

        A[i] = A[Index[i + 1]];
        A[Index[i + 1]] = v;
        Index[v] = Index[i + 1];
    }

    cout << ans << endl;

    for (int i = 0; i < B.size(); i++) {
        cout << C[i] << " " << B[i] << endl;
    }
}
