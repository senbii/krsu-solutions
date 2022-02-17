/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <deque>
#include <cmath>
#include <vector>
#include <set>

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

const int N = 30005;

int n;
int t[N], s[N];

bool check(int k) {
    multiset <int> ms;
    for (int i = 0; i < k; i++) {
        ms.insert(0);
    }
    for (int i = 1; i <= n; i++) {
        if (*ms.begin() <= t[i] + 10) {
            int new_t = max(*ms.begin(), t[i]) + s[i];
            ms.erase(ms.begin());
            ms.insert(new_t);
        }
        else {
            return false;
        }
    }

    return true;
}

void solve() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> s[i];
    }

    int l = 1, r = n;

    while (l <= r) {
        int md = (l + r) / 2;
        if (check(md) == true) {
            r = md - 1;
        }
        else {
            l = md + 1;
        }
    }

    cout << r + 1 << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}