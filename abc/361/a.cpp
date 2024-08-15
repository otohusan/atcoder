#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int n, k, x;
    cin >> n >> k >> x;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        cout << a << " ";
        if (i + 1 == k)
            cout << x << " ";
    }
}
