#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, T, A;
    cin >> N >> T >> A;

    cout << (N - (T + A) < abs(T - A) ? "Yes" : "No");
}
