/*
by:senb1
*/
#include <iostream>

using namespace std;

#define ll long long

ll a, b, c, d, f;

ll binpow(ll a, ll n) {
    if (n == 0) return 1;
    if (n % 2) return binpow(a, n - 1) * a % f;
    ll b = binpow(a, n / 2) % f;
    return b * b % f;
}

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> a >> b >> c >> d >> f;
    ll q = gcd(a, c);
    ll ans = binpow(q, max(b, d));
    cout << ans << endl;
}
