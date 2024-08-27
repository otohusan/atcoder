#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < 24; i++) {
        if ((b + i) % 24 == c)
            break;
        if ((b + i) % 24 == a) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
}
