/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define ll long long

using namespace std;

int bp(int a, int n, int m) {
    if (n == 0) return 1;
    if (n % 2) return bp(a, n - 1, m) * a % m;
    int b = bp(a, n / 2, m) % m;
    return b * b % m;
}

void solve() {
    int a, b;
    cin >> a >> b;
    int aa = bp(a, 5, b);
    cout << aa * (aa + 17) / 2 % b;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
}