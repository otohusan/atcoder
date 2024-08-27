#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll INF = LLONG_MAX;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string s;
    cin >> s;

    while (s.back() == '0') {
        s.pop_back();
    }

    if (s.back() == '.')
        s.pop_back();

    cout << s;
}
