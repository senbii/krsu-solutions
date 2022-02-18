/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

#define ll long long
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define all(x) x.begin(), x.end()

using namespace std;

void solve() {
    double a, b, m, k;
    cin >> a >> b >> m >> k;

    if (a * m + b * k <= a * b) {
        cout << m * k << endl;
        return;
    }

    double x = b;
    double y = a;

    double S = x * y / 2;

    if (x > m) {
        double my = (a * b - a * m) / b;
        double s1 = (x - m) * my / 2;
        S -= s1;
    }

    if (y > k) {
        double xk = (a * b - b * k) / a;
        double s2 = (y - k) * xk / 2;
        S -= s2;
    }

    cout << ceil(S) << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}