#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

// 2点間の距離の2乗を計算する関数
ll squared_distance(pair<int, int> p1, pair<int, int> p2) {
    ll dx = p1.first - p2.first;
    ll dy = p1.second - p2.second;
    return dx * dx + dy * dy;
}

int main() {
    vector<pair<int, int>> points(3);

    // 3点の入力を受け取る
    for (int i = 0; i < 3; i++) {
        cin >> points[i].first >> points[i].second;
    }

    // 3辺の長さの2乗を計算
    ll A = squared_distance(points[0], points[1]);
    ll B = squared_distance(points[0], points[2]);
    ll C = squared_distance(points[1], points[2]);

    // ピタゴラスの定理による直角三角形の判定
    if (A == B + C || B == A + C || C == A + B) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
