#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

int main() {
    string S;
    string T;
    cin >> S >> T;

    int at_count = 0;

    map<char, int> S_count;
    map<char, int> T_count;

    for (char i = 'a'; i <= 'z'; i++) {
        S_count[i] = 0;
        T_count[i] = 0;
    }

    for (auto s : S) {
        if (s == '@') {
            at_count++;
            continue;
        }

        S_count[s]++;
    }

    for (auto t : T) {
        if (t == '@') {
            at_count++;
            continue;
        }

        T_count[t]++;
    }

    ll diff = 0;

    set<char> Atcoder;

    Atcoder.insert('a');
    Atcoder.insert('t');
    Atcoder.insert('c');
    Atcoder.insert('o');
    Atcoder.insert('d');
    Atcoder.insert('e');
    Atcoder.insert('r');

    for (char i = 'a'; i <= 'z'; i++) {
        ll difee = abs(S_count[i] - T_count[i]);

        if (!Atcoder.count(i) && difee != 0) {
            cout << "No";
            return 0;
        }

        diff += difee;
    }

    cout << (diff <= at_count ? "Yes" : "No");
}
