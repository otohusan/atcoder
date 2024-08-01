#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, P, Q, R, S;
    cin >> N >> P >> Q >> R >> S;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    for (int i = 0; i <= Q - P; i++) {
        swap(A[i + P - 1], A[i + R - 1]);
    }

    for (auto a : A) {
        cout << a << " ";
    }
}
