#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ll N;
    cin >> N;
    N--;

    vector<int> A;
    while (N) {
        A.push_back(N % 5);
        N = N / 5;
    }

    reverse(A.begin(), A.end());

    if (A.empty())
        A.push_back(0);

    for (auto a : A) {
        cout << a * 2;
    }
}
