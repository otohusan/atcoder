#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N), S(N), T(N);
    for (auto &a : A)
        cin >> a;
    for (int i = 0; i < N; i++) {
        cin >> S[i] >> T[i];
    }

    for (int i = 0; i < N - 1; i++) {
        long long kazu = A[i] / S[i];
        A[i + 1] += kazu * T[i];
    }

    cout << A[N - 1];
}
