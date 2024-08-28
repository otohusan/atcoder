#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int R;
    cin >> R;

    if (R < 100) {
        cout << 100 - R;
        return 0;
    }

    if (R < 200) {
        cout << 200 - R;
        return 0;
    }

    if (R < 300) {
        cout << 300 - R;
        return 0;
    }
}
