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
