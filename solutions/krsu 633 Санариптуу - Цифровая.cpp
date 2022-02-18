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