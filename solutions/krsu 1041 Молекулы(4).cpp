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

const int N = 1e5 + 7;

int aa[N], bb[N], cc[N];

void solve() {
	string a, b, c;

	cin >> a >> b >> c;

	for (int i = 0; i < a.size(); i++)
	{
		if (isalpha(a[i]))
		{
			if (i == a.size() - 1 || isalpha(a[i + 1]))
			{
				aa[a[i]]++;
			}
			else
			{
				aa[a[i]] += (int(a[i + 1] - '0'));
			}
		}
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (isalpha(b[i]))
		{
			if (i == b.size() - 1 || isalpha(b[i + 1]))
			{
				bb[b[i]]++;
			}
			else
			{
				bb[b[i]] += (int(b[i + 1] - '0'));
			}
		}
	}
	for (int i = 0; i < c.size(); i++)
	{
		if (isalpha(c[i]))
		{
			if (i == c.size() - 1 || isalpha(c[i + 1]))
			{
				cc[c[i]]++;
			}
			else
			{
				cc[c[i]] += (int(c[i + 1] - '0'));
			}
		}
	}


	for (int i = 1; i < 100; i++)
	{
		for (int j = 1; j < 100; j++)
		{
			for (int k = 1; k < 100; k++)
			{
				for (int l = 0; l < a.size(); l++)
				{
					if (isalpha(a[l]))
						aa[a[l]] *= i;
				}
				for (int l = 0; l < b.size(); l++)
				{
					if (isalpha(b[l]))
						bb[b[l]] *= j;
				}
				bool fl = 0;
				for (int l = 0; l < c.size(); l++)
				{
					if (isdigit(c[l]))continue;
					cc[c[l]] *= k;
					if (aa[c[l]] + bb[c[l]] != cc[c[l]])fl = 1;
				}
				if (!fl)
				{
					cout << i << " " << j << " " << k << endl;
					return;
				}
				for (int l = 0; l < a.size(); l++)
				{
					if (isalpha(a[l]))
						aa[a[l]] /= i;
				}
				for (int l = 0; l < b.size(); l++)
				{
					if (isalpha(b[l]))
						bb[b[l]] /= j;
				}
				for (int l = 0; l < c.size(); l++)
				{
					if (isdigit(c[l]))continue;
					cc[c[l]] /= k;
				}
			}
		}
	}
	cout << "0 0 0" << endl;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}
