#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    sort(A.begin(), A.end(), greater<int>());
    unique(A.begin(), A.end());

    cout << A[1];
}
