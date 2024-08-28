#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int a, b;
    cin >> a >> b;

    cout << (abs(b - (a + a)) <= 1 ? "Yes" : "No");
}
