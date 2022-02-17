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

int bp(int a, int n) {
    if (n == 0) return 1;
    if (n % 2) return bp(a, n - 1) * a;
    int b = bp(a, n / 2);
    return b * b;
}

const int catN = 51;
ll cat[catN];

void catnums(int n) {
    cat[0] = cat[1] = 1;
    for (int i = 2; i <= n; i++)
        for (int j = 0; j < i; j++)
            cat[i] += cat[j] * cat[i - j - 1];
    cout << cat[n];
}
vector<int> v;
int m, q;
void solve() {
    int a;
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
    for (int i = 0; i < a; i++) {
        cout << v[i] << " ";
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