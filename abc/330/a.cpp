#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    int N, L;
    cin >> N >> L;
    vector<int >A(N);
    for(auto& a : A) cin >> a;

    int ans = 0;

    for(int i = 0; i < N; i++){
        if(A[i] >= L)ans++;
    }

    cout << ans;
}
