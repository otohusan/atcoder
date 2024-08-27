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

    string ans = s;

    for (int i = 0; i < s.length(); i++) {
        if (s[s.length() - 1 - i] == '.') {
            ans.pop_back();
            break;
        }
        if (s[s.length() - 1 - i] == '0') {
            ans.pop_back();
            continue;
        }
        break;
    }

    cout << ans;
}
