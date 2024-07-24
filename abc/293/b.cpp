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
    vector<bool> ans(N, false);
    for (auto &a : A)
        cin >> a;

    for (int i = 0; i < N; i++) {
        if (!ans[i]) {
            ans[A[i] - 1] = true;
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (!ans[i])
            count++;
    }

    cout << count << endl;

    for (int i = 0; i < N; i++) {
        if (ans[i])
            continue;

        cout << i + 1 << " ";
    }
}
