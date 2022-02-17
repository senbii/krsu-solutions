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
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define all(x) x.begin(), x.end()
#define dbl double

using namespace std;

void solve() {
    int ans = 0, x, y;
    cin >> x >> y;
    x = abs(x);
    y = abs(y);
    while (x > 0 && y > 0) {
        if (x > y) {
            x -= 4;
            y -= 3;
        }
        else {
            x -= 3;
            y -= 4;
        }
        ans++;
    }
    if (x > y) ans += (x + 4) / 5;
    else ans += (y + 4) / 5;
    cout << ans;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}