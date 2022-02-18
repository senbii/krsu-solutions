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

const int N = (1e6 + 12);
const int mod = (1e9 + 7);
const int inf = (1e9 + 7);

int have[30], havec[30];

void solve() {
	string a, b, c;
	vector<char > veca, vecb, vecc;
	cin >> a >> b >> c;
	a = a + ".";
	for (int i = 0; i < a.size(); i++) {
		if (isalpha(a[i])) {
			veca.pb(a[i]);
			if (isdigit(a[i + 1])) {
				veca.pb(a[i + 1]);
				i++;
			}
			else {
				veca.pb('1');
			}
		}
	}
	b = b + ".";
	for (int i = 0; i < b.size(); i++) {
		if (isalpha(b[i])) {
			vecb.pb(b[i]);
			if (isdigit(b[i + 1])) {
				vecb.pb(b[i + 1]);
				i++;
			}
			else {
				vecb.pb('1');
			}
		}
	}
	c = c + ".";
	for (int i = 0; i < c.size(); i++) {
		if (isalpha(c[i])) {
			vecc.pb(c[i]);
			if (isdigit(c[i + 1])) {
				vecc.pb(c[i + 1]);
				i++;
			}
			else {
				vecc.pb('1');
			}
		}
	}
	int x = 0, y = 0, z = 0, sm = inf;
	for (int ii = 1; ii <= 100; ii++) {
		for (int j = 1; j <= 100; j++) {
			for (int k = 1; k <= 100; k++) {
				for (int i = 0; i < veca.size(); i += 2) {
					have[int(veca[i]) - 'A'] += (int(veca[i + 1]) - '0') * ii;
				}
				for (int i = 0; i < vecb.size(); i += 2) {
					have[int(vecb[i]) - 'A'] += (int(vecb[i + 1]) - '0') * j;
				}
				for (int i = 0; i < vecc.size(); i += 2) {
					havec[int(vecc[i]) - 'A'] += (int(vecc[i + 1]) - '0') * k;
				}
				bool f = true;
				for (int i = 0; i < 26; i++) {
					if (have[i] != havec[i]) {
						f = false;
						break;
					}
				}
				if (f && ii * j < sm) {
					x = ii;
					y = j;
					z = k;
					sm = ii * j;
				}
				memset(have, 0, sizeof(have));
				memset(havec, 0, sizeof(havec));
			}
		}
	}
	cout << x << " " << y << " " << z;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}
