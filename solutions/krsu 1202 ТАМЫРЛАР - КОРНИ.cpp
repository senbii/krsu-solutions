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

const int N = 2020;
int dp[N];

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int x = -2021; x < 2021; x++) {
        if ((a * x + b) * x == c) {
            ans = x;
            break;
        }
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