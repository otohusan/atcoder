#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    set<string> list;

    char a;

    for (int i = 0; i < S.size(); i++) {
        for (int j = 1; i + j <= S.size(); j++) {
            list.insert(S.substr(i, j));
        }
    }

    cout << list.size();
}
