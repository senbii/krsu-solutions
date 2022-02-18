#include <iostream>

using namespace std;

void solve() {
    int m, j, t, ans = 0;
    cin >> m >> j >> t;
    while (t > 0) {
        if (t >= m) {
            t -= m;
            j += m;
            ans += 20;
        }
        else {
            ans += 20;
            int q = m - t;
            if (j > q) j -= q;
            else j = 0;
            j += t;
            t = 0;
        }
    }
    int h = (j + m - 1) / m;
    ans += ((h - 1) * 20 + 10);
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}
