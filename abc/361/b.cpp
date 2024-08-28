#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    int g, h, i, j, k, l;

    // 2つの直方体の座標を入力
    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;

    // x軸、y軸、z軸でそれぞれの共通部分の有無を確認
    bool x_overlap = max(a, g) < min(d, j);
    bool y_overlap = max(b, h) < min(e, k);
    bool z_overlap = max(c, i) < min(f, l);

    // 3軸すべてで共通部分がある場合、Yesを出力
    if (x_overlap && y_overlap && z_overlap) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
