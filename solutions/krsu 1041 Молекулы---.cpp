/*
by:senb1
10 points
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
int r[26][4];

void solve() {
    cin >> a >> b >> c;

    for (int i = 0; i < a.size(); i++) {
        if (i + 1 != a.size() && isdigit(a[i + 1]))
            r[a[i] - 'A'][0] += a[i + 1] - '0', i++;
        else
            r[a[i] - 'A'][0]++;
    }
    for (int i = 0; i < b.size(); i++) {
        if (i + 1 != b.size() && isdigit(b[i + 1]))
            r[b[i] - 'A'][1] += b[i + 1] - '0', i++;
        else
            r[b[i] - 'A'][1]++;
    }
    for (int i = 0; i < c.size(); i++) {
        if (i + 1 != c.size() && isdigit(c[i + 1]))
            r[c[i] - 'A'][2] += c[i + 1] - '0', i++;
        else
            r[c[i] - 'A'][2]++;
    }

    bool fl;

    for (int i = 1; i < 100; i++) {
        for (int j = 1; j < 100; j++) {
            for (int k = 1; k < 100; k++) {
                fl = 1;
                for (int l = 0; l < 26; l++)
                    r[l][3] = i * r[l][0];

                for (int l = 0; l < 26; l++)
                    r[l][3] += j * r[l][1];

                for (int l = 0; l < 26; l++)
                    if (r[l][2] * k != r[l][3])
                        fl = 0;

                if (fl) {
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