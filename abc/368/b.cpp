#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    int ans = 0;

    while (1) {
        int count = 0;
        for (auto a : A) {
            if (a > 0)
                count++;
        }
        if (count <= 1) {
            cout << ans;
            return 0;
        }

        sort(A.rbegin(), A.rend());
        A[0]--;
        A[1]--;
        ans++;
    }
}
