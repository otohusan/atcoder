#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int Y;
    cin >> Y;

    if (Y % 4 != 0 || (Y % 100 == 0 && Y % 400 != 0)) {
        cout << "365";
    } else {
        cout << "366";
    }
}
