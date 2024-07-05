#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;

    if (X > Y)
        swap(X, Y);

    cout << ((Z > X) && (Z < Y) ? "Yes" : "No");
}
