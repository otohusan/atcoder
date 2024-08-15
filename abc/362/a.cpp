#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int r, g, b;
    cin >> r >> g >> b;
    string s;
    cin >> s;

    int ans = 100;

    if (s != "Red" && r < ans)
        ans = r;
    if (s != "Green" && g < ans)
        ans = g;
    if (s != "Blue" && b < ans)
        ans = b;

    cout << ans;
}
