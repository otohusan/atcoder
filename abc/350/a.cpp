#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    string S;
    cin >> S;

    string a = "";
    a += S[3];
    a += S[4];
    a += S[5];

    if (a == "316") {
        cout << "No";
        return 0;
    }

    int b = stoi(a);

    if (b < 350 && b > 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
