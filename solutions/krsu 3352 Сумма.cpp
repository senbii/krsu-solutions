/*
by:senb1
4 points, but why
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

string s;
string nums[] = { "BIR", "EKI","uc","ToRT","BEs","ALTY","JETI","SEGIZ","TOGUZ","ON" };

void posnums(string a, vector<int>& v) {

    for (int k = 0; k < 10; k++) {
        int j = 0, ok = 1;
        for (int i = 0; i < a.size(); i++) {
            while (j < nums[k].size() && nums[k][j] != a[i]) {
                j++;
            }
            if (j >= nums[k].size() && nums[k][j] != a[i]) {
                ok = 0;
                break;
            }
        }
        if (ok)
            v.push_back(k + 1);
    }

}

void solve() {
    cin >> s;

    int n = s.find('+');
    string a = s.substr(0, n);
    string b = s.substr(n + 1, s.size() - 1);

    vector<int> v1, v2;

    posnums(a, v1);
    posnums(b, v2);

    //if (v1.empty() || v2.empty()) {
    //    cout << "0\n";
    //}

    int mx = 0;

    for (int x : v1) {
        for (int y : v2) {
            //cout << x << " " << y << " ";
            mx = max(mx, x + y);
        }
    }

    cout << mx << endl;

}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
}

