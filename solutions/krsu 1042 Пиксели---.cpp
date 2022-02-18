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

int x[3], y[3], a[3], b[3], z[3];
int n;
map<pair<int, int>, int> mp;

void solve() {
    cin >> n;

    if (n >= 1)
    {
        cin >> x[0] >> y[0] >> a[0] >> b[0] >> z[0];

        if (x[0] < a[0])
            for (int i = x[0]; i <= a[0]; i++)
                for (int j = min(y[0], b[0]); j <= max(b[0], y[0]); j++)
                    mp[{i, j}] = z[0];

        else
            for (int i = a[0]; i <= x[0]; i++)
                for (int j = min(y[0], b[0]); j <= max(b[0], y[0]); j++)
                    mp[{i, j}] = z[0];

    }


    if (n >= 2)
    {
        cin >> x[1] >> y[1] >> a[1] >> b[1] >> z[1];

        if (x[1] < a[1])
            for (int i = x[1]; i <= a[1]; i++)
                for (int j = min(y[1], b[1]); j <= max(b[1], y[1]); j++)
                    mp[{i, j}] = z[1];

        else
            for (int i = a[1]; i <= x[1]; i++)
                for (int j = min(y[1], b[1]); j <= max(b[1], y[1]); j++)
                    mp[{i, j}] = z[1];

    }


    if (n >= 3)
    {
        cin >> x[2] >> y[2] >> a[2] >> b[2] >> z[2];

        if (x[2] < a[2])
            for (int i = x[2]; i <= a[2]; i++)
                for (int j = min(y[2], b[2]); j <= max(b[2], y[2]); j++)
                    mp[{i, j}] = z[2];

        else
            for (int i = a[2]; i <= x[2]; i++)
                for (int j = min(y[2], b[2]); j <= max(b[2], y[2]); j++)
                    mp[{i, j}] = z[2];

    }

    int ans = 0;

    for (auto x : mp)
        if (x.second == z[0])
            ans++;

    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
        solve();

}
/*
2
2 3 2 8 1
2 5 11 4 2

4
*/