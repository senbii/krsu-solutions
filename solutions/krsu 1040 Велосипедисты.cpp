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

int ar[3], cnt = 0;

void solve() {
    cin >> ar[0] >> ar[1] >> ar[2];

    if (ar[0] == 0 || ar[1] == 0 || ar[2] == 0) {
        cout << 0, 0;
        return;
    }
    sort(ar, ar + 3);
    reverse(ar, ar + 3);
    if (ar[0] / ar[2] == 2) {
        cout << ar[2], 0;
        return;
    }
    while (1) {
        sort(ar, ar + 3);
        reverse(ar, ar + 3);
        if (ar[0] == 0 || ar[1] == 0 || ar[2] == 0)break;
        if (ar[0] >= 2) {
            ar[0] -= 2;
            ar[1] --;
            ar[2] --;
            cnt++;
        }
        else break;
    }
    cout << cnt;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}