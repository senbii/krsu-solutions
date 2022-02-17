/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define ll long long
#define elif else if
#define str string
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define all(x) x.begin(), x.end()
#define dbl double

using namespace std;

int bp(int a, int n, int m) {
    if (n == 0) return 1;
    if (n % 2) return bp(a, n - 1, m) * a % m;
    int b = bp(a, n / 2, m) % m;
    return b * b % m;
}

const int catN = 51;
ll cat[catN];

void catnums(int n) {
    cat[0] = cat[1] = 1;
    for (int i = 2; i <= n; i++)
        for (int j = 0; j < i; j++)
            cat[i] += cat[j] * cat[i - j - 1];
    cout << cat[n];
}

void solve() {
    dbl xv, yv, uv, xh, yh, uh;
    cin >> xv >> yv >> uv >> xh >> yh >> uh;
    uv /= 2;
    uh /= 2;
    if (yv - uv < yh && yh < yv + uv) {
        if (xh - uh < xv && xv < xh + uh) {
            cout << "X";
            return;
        }
    }

    if (yv - uv > yh || yh > yv + uv || xh - uh > xv || xv > xh + uh) {
        cout << "A";
        return;
    }

    if (yv - uv == yh || yv + uv == yh) {
        if (xh - uh == xv || xh + uh == xv) {
            cout << "L" << endl;
            return;
        }
    }

    cout << "T";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
