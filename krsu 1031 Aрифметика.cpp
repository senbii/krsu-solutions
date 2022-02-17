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

const int N = 1e6 + 5;
const int mod = 2020;

ll bp(ll a, ll n) {
    if (n == 0) return 1;
    if (n % 2) return bp(a, n - 1) * a % mod;
    ll b = bp(a, n / 2);
    return b * b % mod;
}
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int dp[N];
void solve() {
    int n;
    cin >> n;

    dp[1] = 9;
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] * 10 + dp[i - 2] * 9 * 2) % mod;
    }

    int res = dp[n];
    res -= (bp(10, n - 1) * 9) % mod;
    if (res < 0) res += mod;

    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}