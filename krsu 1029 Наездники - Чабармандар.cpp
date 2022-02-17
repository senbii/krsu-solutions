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

const int N = 1e5;
const long long inf = 2e18;

int n;
long long T, d[N];

void solve() {
    cin >> n >> T;

    vector < pair <int, long long> > vec;
    for (int i = 1; i <= n; i++) {
        long long p, v;
        cin >> p >> v;
        vec.push_back(make_pair(p, p + v * T));
    }

    d[0] = -inf;
    for (int i = 1; i < N; i++) {
        d[i] = inf;
    }

    sort(vec.rbegin(), vec.rend());

    for (int i = 0; i < vec.size(); i++) {
        long long finish = vec[i].second + i;
        int j = upper_bound(d, d + n, finish) - d;
        if (d[j - 1] < finish && d[j] > finish) {
            d[j] = finish;
        }
    }

    for (int i = N - 1; i >= 0; i--) {
        if (d[i] != inf) {
            cout << i << endl;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}