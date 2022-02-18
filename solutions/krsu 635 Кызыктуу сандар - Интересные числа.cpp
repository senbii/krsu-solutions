/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>

#define ll long long
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define all(x) x.begin(), x.end()

using namespace std;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

//1944
//111111111111111111111111111111111111

bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

bool isInteresting(string s) {
    int cnt = count(s.begin(), s.end(), '0');
    if (cnt > 0) return false;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            int a = s[i] - '0';
            int b = s[j] - '0';
            if (gcd(a, b) != 1 || !isPrime(a + b)) {
                return false;
            }
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector <string> vec;
    for (int i = 11; i <= 99; i++) {
        string x = to_string(i);
        if (isInteresting(x)) {
            vec.push_back(x);
        }
    }
    for (int i = 0; vec.size() <= n; i++) {
        string s = vec[i];
        for (char d = '1'; d <= '9'; d++) {
            if (isInteresting(s + d)) {
                vec.push_back(s + d);
            }
        }
    }
    cout << vec[n - 1] << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}