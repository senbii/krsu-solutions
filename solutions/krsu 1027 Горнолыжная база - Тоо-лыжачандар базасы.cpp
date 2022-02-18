/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <deque>
#include <cmath>
#include <vector>

#define ll long long
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define all(x) x.begin(), x.end()
#define fr first
#define sc second
#define mk make_pair

using namespace std;

const int mod = 2021;

ll bp(ll a, ll n) {
    if (n == 0) return 1;
    if (n % 2) return bp(a, n - 1) * a % mod;
    ll b = bp(a, n / 2);
    return b * b % mod;
}
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

const int N = 55;

int n, m;
int h[N][N], dp[N][N];
vector < pair <int, pair <int, int> > > vec;

void solve() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> h[i][j];
            vec.push_back({ h[i][j], {i, j} });
        }
    }

    sort(vec.rbegin(), vec.rend());

    for (auto v : vec) {
        int i = v.second.first;
        int j = v.second.second;
        if (i - 1 >= 1 && h[i][j] > h[i - 1][j]) {
            dp[i - 1][j] = max(dp[i - 1][j], dp[i][j] + 1);
        }
        if (i + 1 <= n && h[i][j] > h[i + 1][j]) {
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + 1);
        }
        if (j - 1 >= 1 && h[i][j] > h[i][j - 1]) {
            dp[i][j - 1] = max(dp[i][j - 1], dp[i][j] + 1);
        }
        if (j + 1 <= m && h[i][j] > h[i][j + 1]) {
            dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + 1);
        }
    }

    cout << dp[1][1] << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}