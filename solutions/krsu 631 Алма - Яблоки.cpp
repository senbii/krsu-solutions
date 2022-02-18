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

using namespace std;

void solve() {
    int q;
    cin >> q;
    int ans = 0;
    while (q > 40) {
        ans += 5;
        q -= 200;
        if (q > 0) ans += 3;
    }
    while (q > 0) {
        ans++;
        q -= 20;
        if (q > 0) ans++;
    }
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
