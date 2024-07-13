#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    int N;
    string S;
    cin >> N >> S;

    if (S.find('o') == string::npos) {
        cout << "No";
        return 0;
    }

    if (S.find('x') != string::npos) {
        cout << "No";
        return 0;
    }

    cout << "Yes";
}
