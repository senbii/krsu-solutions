/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define ll long long
#define elif else if
#define str string
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define all(x) x.begin(), x.end()
#define dbl double

using namespace std;

char int_symbol(int in) {
    char out[] = { '0','1','2','3','4','5','6','7','8','9',
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
    'Q','R','S','T','U','V','W','X','Y','Z' };
    return out[in];
}

void ten_base(int in, int base) {
    if (in < base) {
        cout << int_symbol(in);
        return;
    }
    ten_base(in / base, base);
    cout << int_symbol(in % base);
}

void solve() {
    int n, sst;
    cin >> n >> sst;
    ten_base(n, sst);

}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}