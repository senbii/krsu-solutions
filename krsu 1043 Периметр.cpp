/*
by:senb1
*/

#include <algorithm>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <locale>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <valarray>
#include <vector>

using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define bp binpow
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

ll n, x, y, res;

void solve() {
    cin >> n;
    ll i = 7 - (n % 7);
    while ((i - n) / 2 <= n) {
        if (i > n && (i - n - 1) < i / 2)
            res += (i / 2) - (i - n - 1);
        res %= 1000;
        i += 7;
    }
    cout << res % 1000 << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
