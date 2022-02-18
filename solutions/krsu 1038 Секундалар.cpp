#include <iostream>

using namespace std;

const int N = 51;
int a[N], b[N];

void solve() {
    int l = 100, r = -1, n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i <= 60; i++) {
        bool f = true;
        int x = i;
        for (int j = 0; j <= n; j++)
            if ((i + a[j]) / 60 != b[j])
                f = false;
        if (f) {
            l = min(l, x);
            r = max(r, x);
        }
    }
    if (r == -1) cout << "-1 -1";
    else cout << l << " " << r;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
}
