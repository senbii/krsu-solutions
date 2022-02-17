/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <deque>
#include <cmath>

#define ll long long
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define all(x) x.begin(), x.end()
#define fr first
#define sc second
#define mk make_pair

using namespace std;

ll bp(ll a, ll n) {
    if (n == 0) return 1;
    if (n % 2) return bp(a, n - 1) * a;
    ll b = bp(a, n / 2);
    return b * b;
}
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

void solve() {
    ll k, n;
    cin >> k >> n;

    if (k <= n) cout << ceil(k - (1 << k) + sqrt((1 << k) * ((1 << k) + n))) << endl;
    else {
        ll ans = ceil(n - (1 << n) + sqrt((1 << n) * ((1 << n) + n)));
        for (ll i = n + 1; i <= k; i++) ans++;
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}