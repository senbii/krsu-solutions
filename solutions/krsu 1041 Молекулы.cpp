/*
by:senb1
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <math.h>
#include <cmath>

using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define bp binpow
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

string a, b, c;
int cnt[26][4], i, j, k, l;
bool flag; ];

void solve() {
    cin >> a >> b >> c;

    cin >> a >> b >> c;
    for (i = 0; i < a.size(); i++) {
        if (i + 1 != a.size() && isdigit(a[i + 1])) cnt[a[i] - 'A'][0] += a[i + 1] - '0', i++;
        else cnt[a[i] - 'A'][0]++;
    }
    for (i = 0; i < b.size(); i++) {
        if (i + 1 != b.size() && isdigit(b[i + 1])) cnt[b[i] - 'A'][1] += b[i + 1] - '0', i++;
        else cnt[b[i] - 'A'][1]++;
    }
    for (i = 0; i < c.size(); i++) {
        if (i + 1 != c.size() && isdigit(c[i + 1])) cnt[c[i] - 'A'][2] += c[i + 1] - '0', i++;
        else cnt[c[i] - 'A'][2]++;
    }

    for (i = 1; i < 100; i++) {
        for (j = 1; j < 100; j++) {
            for (k = 1; k < 100; k++) {
                flag = 1;
                for (l = 0; l < 26; l++) cnt[l][3] = i * cnt[l][0];
                for (l = 0; l < 26; l++) cnt[l][3] += j * cnt[l][1];
                for (l = 0; l < 26; l++) if (cnt[l][2] * k != cnt[l][3]) flag = 0;
                if (flag) {
                    cout << i << " " << j << " " << k;
                    return;
                }
            }
        }
    }

    cout << "0 0 0";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
/*

H2 O2 H2O

2 1 2

F K2F3S K4F6S2

0 0 0

*/