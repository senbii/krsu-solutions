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

using namespace std;

int bp(int a, int n) {
    if (n == 0) return 1;
    if (n % 2) return bp(a, n - 1) * a;
    int b = bp(a, n / 2);
    return b * b;
}

const int N = 2020;
ll dp[N];

void solve() {
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 4;
    dp[3] = 10;
    for (int i = 4; i <= n; i++) {
        dp[i] = i * i + dp[i - 2];
    }
    cout << dp[n];
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}