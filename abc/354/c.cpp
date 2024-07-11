#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
// U, R, D, L
vector<int> dy = {-1, 0, 1, 0};
vector<int> dx = {0, 1, 0, -1};

struct Card {
    int a;
    int c;
    int index;
};

int main() {
    ll N;
    cin >> N;

    vector<Card> cards(N);
    for (int i = 0; i < N; ++i) {
        int a, c;
        cin >> a >> c;
        cards[i] = {a, c, i};
    }

    sort(cards.begin(), cards.end(),
         [](const auto &left, const auto &right) { return left.c < right.c; });

    ll min_a = -1;
    vector<ll> ans;

    for (ll i = 0; i < N; i++) {
        if (min_a < cards[i].a) {
            ans.push_back(cards[i].index);
            min_a = cards[i].a;
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (auto a : ans)
        cout << a + 1 << " ";
}
