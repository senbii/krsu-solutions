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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define all(x) x.begin(), x.end()

using namespace std;

const int N = 20000;
int ar[N];
int n, mm;

void solve() {
    cin >> n >> mm;

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    while (mm--) {
        int x;
        cin >> x;

        int l = 0, r = 0;

        for (int i = 0; i < n; i++) {
            if (ar[i] == x) {
                if (!l) 
                    l = i + 1;

                if (ar[i + 1] != x) 
                    r = i + 1;
            }
        }

        if (l) 
            cout << l << ' ' << r << endl;
        else 
            cout << "0\n";
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