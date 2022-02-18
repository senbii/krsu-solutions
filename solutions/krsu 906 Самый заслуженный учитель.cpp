/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define ll long long
#define str string
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define all(x) x.begin(), x.end()

using namespace std;

vector<int> v;
int m, q, a;

void solve() {
    cin >> a;

    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        v.push_back(x);

        if (x > m) {
            m = x;
            q = i;
        }
    }

    swap(v[0], v[q]);

    for (int i = 0; i < a; i++)
        cout << v[i] << " ";

}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}