/*
by:senb1
*/

#include <algorithm>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <locale>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <valarray>
#include <vector>
#include <assert.h>
#include <memory>

using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int n, ans, a;
char c;
int x, y, z, mxs, mys, mzs, mxf, myf, mzf;

void solve() {
    cin >> n;

    while (n--) {
        cin >> c >> a;
        if (c == 'X') {
            x += a;
            mxs = min(mxs, x);
            mxf = max(mxf, x);
        }
        if (c == 'Z') {
            z += a;
            mzs = min(mzs, z);
            mzf = max(mzf, z);
        }
        if (c == 'Y') {
            y += a;
            mys = min(mys, y);
            myf = max(myf, y);
        }
    }

    ans = (mxf - mxs) + (mzf - mzs) + (myf - mys);
    cout << ans + 1;

}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
}
/*

3
Z 5
X -6
X 4

12


*/