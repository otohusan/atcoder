#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;

        if (q == 1) {
            int k, x;
            cin >> k >> x;

            A[k - 1] = x;
        } else {
            int k;
            cin >> k;

            cout << A[k - 1] << endl;
        }
    }
}
