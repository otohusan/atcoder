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

    string be = "";

    for (int i = 0; i < N - 1; i++) {
        string s;
        cin >> s;

        if (s == "sweet" && be == s) {
            cout << "No";
            return 0;
        }

        be = s;
    }

    cout << "Yes";
}
