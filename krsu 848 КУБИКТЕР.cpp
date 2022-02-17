/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <deque>

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

const int N = 1e6 + 5;
const int inf = 1e9 + 7;

int n;
int dp[N], ar[N];

void solve() {
    for (int i = 1; i <= 50; i++) {
        ar[i] = i * i * i;
    }
    cin >> n;
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = inf;
        for (int j = 1; j <= 50; j++) {
            if (i >= ar[j] && dp[i - ar[j]] + 1 < dp[i])
                dp[i] = dp[i - ar[j]] + 1;
        }
    }
    cout << dp[n];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}