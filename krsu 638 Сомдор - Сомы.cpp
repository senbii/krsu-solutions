/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <conio.h>

#define ll long long
#define str string
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define all(x) x.begin(), x.end()

using namespace std;

int bp(int a, int n) {
    if (n == 0) return 1;
    if (n % 2) return bp(a, n - 1) * a;
    int b = bp(a, n / 2);
    return b * b;
}

const int catN = 51;
ll cat[catN];

void catnums(int n) {
    cat[0] = cat[1] = 1;
    for (int i = 2; i <= n; i++)
        for (int j = 0; j < i; j++)
            cat[i] += cat[j] * cat[i - j - 1];
    cout << cat[n];
}

int c3, c10, s;
void solve() {
    cin >> c3 >> c10 >> s;
    bool fl = 0;
    int ans = 0;
    while (c3 > 0 && s > 0) {
        if (s % 10 == 0 && s / 10 <= c10) break;
        c3--;
        s -= 3;
        ans++;
    }
    if (s % 10 == 0 && s > 0 && c10 >= s / 10) {
        ans += s / 10;
        cout << ans;
    }
    else if (s == 0) {
        cout << ans;
    }
    else {
        cout << 0;
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}