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

const int N = 1000;
int r[N];
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << i * i << " ";
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

/*
10
3 10 17 31 38 45 52 59 66 73

24

10
2 5 8 11 17 20 23 26 32 35

14 29

10
2 11 20 74 38 47 56 65 29 83

29 74
*/