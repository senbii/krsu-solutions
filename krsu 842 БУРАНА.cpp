/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define ll long long
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define all(x) x.begin(), x.end()

using namespace std;

const int N = 50000;
int a, b, c, d[N];
void solve() {
    cin >> a >> b >> c;
    for (int i = 1; i < 45000; i++)
        d[i] = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= 45000; j++) {
            if (d[j] == 0) {
                d[j] = 1;
                d[j + 6] = 1;
                break;
            }
            else
                continue;
        }
    }
    for (int i = 1; i <= c; i++) {
        for (int j = 1; j <= 45000; j++) {
            if (d[j + b] == 0) {
                d[j + b] = 1;
                d[j + b + 6] = 1;
                break;
            }
            else
                continue;
        }
    }
    for (int i = 45000; i >= 1; i--)
        if (d[i] == 1) {
            cout << i;
            return;
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