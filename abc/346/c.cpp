#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    long long ans = 0;
    for (int i = 0; i < K + 1; i++) {
        ans += i;
    }

    set<int> S;

    for (int i = 0; i < N; i++) {
        if (!S.count(A[i]) && A[i] <= K) {
            S.insert(A[i]);
            ans -= A[i];
        }
    }

    cout << ans;
}
