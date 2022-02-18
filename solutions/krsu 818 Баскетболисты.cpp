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

int n, a, b, cnt;

void solve() {
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= b && x >= a) cnt++;
    }

    cout << cnt;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
/*
6 12 5 8 14 6
*/