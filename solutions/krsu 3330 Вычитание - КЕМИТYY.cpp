/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

#define ll long long
#define str string
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define all(x) x.begin(), x.end()

using namespace std;

string nums[] = { "BIR", "EKI", "uc", "ToRT", "BEs", "ALTY", "JETI", "SEGIZ", "TOGUZ", "ON" };

void solve() {
    string s, a, b;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            for (int j = i + 1; j < s.size(); j++) {
                b += s[j];
            }
            break;
        }
        a += s[i];
    }

    vector <int> vec1, vec2;

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
            vec1.push_back(k);
    }

    for (int k = 0; k < 10; k++) {
        int j = 0, ok = 1;
        for (int i = 0; i < b.size(); i++) {
            while (j < nums[k].size() && nums[k][j] != b[i]) {
                j++;
            }
            if (j >= nums[k].size() && nums[k][j] != b[i]) {
                ok = 0;
                break;
            }
        }
        if (ok)
            vec2.push_back(k);
    }

    if (vec1.empty() || vec2.empty()) {
        cout << "JOK\n";
        return;
    }

    int mn = 100;

    for (int x : vec1) {
        for (int y : vec2) {
            if (x <= y) continue;
            mn = min(mn, x - y);
        }
    }
    cout << nums[mn - 1] << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}