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

const int N = (1e6 + 12);

map < char, int > mp1;
map < char, int > mp2;
map < char, int > mp3;
int ans1 = 1, ans2 = 1, ans3 = 1;

void solve() {
	string s1, s2, s3;
	int i, j, t, k;

	cin >> s1 >> s2 >> s3;

	for (i = 0; i < s1.size(); i++) {
		if (!isdigit(s1[i])) {
			if (isdigit(s1[i + 1])) {
				mp1[s1[i]] = int(s1[i + 1]) - 48;
			}
			else {
				mp1[s1[i]] = 1;
			}
		}
	}
	for (i = 0; i < s2.size(); i++) {
		if (!isdigit(s2[i])) {
			if (isdigit(s2[i + 1])) {
				mp2[s2[i]] = int(s2[i + 1]) - 48;
			}
			else {
				mp2[s2[i]] = 1;
			}
		}
	}
	for (i = 0; i < s3.size(); i++) {
		if (!isdigit(s3[i])) {
			if (isdigit(s3[i + 1])) {
				mp3[s3[i]] = int(s3[i + 1]) - 48;
			}
			else {
				mp3[s3[i]] = 1;
			}
		}
	}

	for (i = 1; i <= 50; i++) {
		for (j = 1; j <= 50; j++) {
			for (t = 1; t <= 50; t++) {
				int ch = 0;
				for (k = 65; k <= 90; k++) {
					if (mp1[char(k)] * i + mp2[char(k)] * j == mp3[char(k)] * t) {
						ch = 0;
					}
					else {
						ch = 1;
						break;
					}
				}

				if (ch == 0) {
					cout << i << " " << j << " " << t;

					return;
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
