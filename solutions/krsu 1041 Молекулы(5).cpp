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

void solve() {
	string s1, s2, s3, s;
	int goh = 0;
	//1
	cin >> s;
	string test1 = s, test2, test3;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9') {
			s1.pb(s[i]);
			continue;
		}
		if (!(isdigit(s[i + 1])))
		{
			s1.pb(s[i]);
			s1.pb('1');
		}
		else {
			s1.pb(s[i]);
		}
	}
	//2
	cin >> s;
	test2 = s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9') {
			s2.pb(s[i]);
			continue;
		}
		if (!(isdigit(s[i + 1])))
		{
			s2.pb(s[i]);
			s2.pb('1');
		}
		else {
			s2.pb(s[i]);
		}
	}
	//3
	cin >> s;
	test3 = s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9') {
			s3.pb(s[i]);
			continue;
		}
		if (!(isdigit(s[i + 1])))
		{
			s3.pb(s[i]);
			s3.pb('1');
		}
		else {
			s3.pb(s[i]);
		}
	}
	for (int i = 0; i < test1.size(); i++)
	{
		if ((isdigit(test1[i])))
			continue;
		int k = test3.find(test1[i]);
		if (k == -1)
		{
			cout << "0 0 0";
			return;
		}
	}
	for (int i = 0; i < test2.size(); i++)
	{

		if ((isdigit(test2[i])))
			continue;
		int k = test3.find(test2[i]);
		if (k == -1)
		{
			cout << "0 0 0";
			return;
		}
	}

	string ans1;
	string ans2;
	string ans3;
	vector<int> ind1;
	vector<int> ind2;
	vector<int> ind3;
	vector<int> ind3_check;
	vector<int> ind2_check;
	vector<int> ind1_check;

	for (int i = 0; i < s1.size(); i++)
	{
		if (isalpha(s1[i]))
		{
			ans1.pb(s1[i]);
			ind1.pb((s1[i + 1]) - 48);
			ind1_check.pb((s1[i + 1]) - 48);
		}
	}
	for (int i = 0; i < s2.size(); i++)
	{
		if (isalpha(s2[i]))
		{
			ans2.pb(s2[i]);
			ind2.pb((s2[i + 1]) - 48);
			ind2_check.pb((s2[i + 1]) - 48);
		}
	}
	for (int i = 0; i < s3.size(); i++)
	{
		if (isalpha(s3[i]))
		{
			ans3.pb(s3[i]);
			ind3.pb((s3[i + 1]) - 48);
			ind3_check.pb((s3[i + 1]) - 48);
		}
	}

	for (int first = 1; first < 100; first++)
	{
		for (int second = 1; second < 100; second++)
		{
			for (int third = 1; third < 100; third++)
			{
				for (int i = 0; i < ind1.size(); i++)ind1_check[i] = ind1[i] * first;

				for (int i = 0; i < ind2.size(); i++)ind2_check[i] = ind2[i] * second;

				for (int i = 0; i < ind3.size(); i++)ind3_check[i] = ind3[i] * third;

				for (int i = 0; i < ans1.size(); i++)
				{
					int k = ans3.find(ans1[i]);
					ind3_check[k] -= (ind1_check[i]);
				}

				for (int i = 0; i < ans2.size(); i++)
				{
					int k = ans3.find(ans2[i]);
					ind3_check[k] -= (ind2_check[i]);
				}
				int c = 0;
				for (int i = 0; i < ind3_check.size(); i++)
				{
					if (ind3_check[i] == 0)
						c++;
				}
				if (c == ind3_check.size())
				{
					cout << first << " " << second << " " << third;
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
