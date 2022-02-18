/*
not by:senb1
*/

#include <bits/stdc++.h>


using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define bp binpow
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define s(a) a.size()
#define pb push_back
#define ret return

int f[100];
int s[100];
int t[100], q[200];
string a, b, c;
vector <char> v;

bool is(int x, int y, int z) {
	for (int i = 0; i < v.size(); ++i) {
		char ch = v[i];
		int e = ch - 'A';
		if (f[e] * x + s[e] * y != t[e] * z)ret 0;
	}
	ret 1;

}

void solve() {
	int i;
	cin >> a >> b >> c;
	for (i = 0; i < a.size(); ++i) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			if (q[a[i]] == 0) {
				q[a[i]] = 1;
				v.pb(a[i]);
			}
			if (a[i + 1] >= '0' && a[i + 1] <= '9') {
				f[a[i] - 'A'] += a[i + 1] - '0';
			}
			else f[a[i] - 'A']++;
		}
	}
	for (i = 0; i < b.size(); ++i) {
		if (b[i] >= 'A' && b[i] <= 'Z') {
			if (q[b[i]] == 0) {
				q[b[i]] = 1;
				v.pb(b[i]);
			}
			if (b[i + 1] >= '0' && b[i + 1] <= '9') {
				s[b[i] - 'A'] += b[i + 1] - '0';
			}
			else s[b[i] - 'A']++;
		}
	}
	for (i = 0; i < c.size(); ++i) {
		if (c[i] >= 'A' && c[i] <= 'Z') {
			if (q[c[i]] == 0) {
				q[c[i]] = 1;
				v.pb(c[i]);
			}
			if (c[i + 1] >= '0' && c[i + 1] <= '9') {
				t[c[i] - 'A'] += c[i + 1] - '0';
			}
			else t[c[i] - 'A']++;
		}
	}

	for (i = 1; i <= 100; ++i) {
		for (int j = 1; j <= 100; ++j) {
			for (int k = 1; k <= 100; ++k) {
				if (is(i, j, k)) {
					cout << i << " " << j << " " << k;
					ret;
				}




			}
		}
	}
	cout << "0 0 0";

}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}
