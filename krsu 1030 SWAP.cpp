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

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    s = ' ' + s;

    int k = 0;

    vector <int> pf(n + 1);
    for (int i = 1; i <= n; i++) {
        pf[i] = pf[i - 1];
        if (s[i] == 'K') {
            k++;
        }
        else {
            pf[i]++;
        }
    }

    int ans = n;
    for (int i = k; i <= n; i++) {
        ans = min(ans, pf[i] - pf[i - k]);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}