/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>

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

const int N = 5005;
int n, t, used[N];
queue <int>  q;

void solve() {
    cin >> n >> t;
    used[1] = 1;
    q.push(1);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        if (v - t >= 1 && !used[v - t]) {
            used[v - t] = used[v] + 1;
            q.push(v - t);
        }

        for (int j = 1; j <= v; j++) {
            if (v % j == 0 && v + j <= 5000 && used[v + j] == 0) {
                used[v + j] = used[v] + 1;
                q.push(v + j);
            }
        }
    }
    cout << used[n] - 1 << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}