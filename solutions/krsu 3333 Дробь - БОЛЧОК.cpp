/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
#include <cmath>
#include <map>

#define ll long long
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define all(x) x.begin(), x.end()

using namespace std;

void solve() {
    string a, b, s;
    cin >> s;
    a = s.substr(0, s.find('/'));
    b = s.substr(s.find('/') + 1, s.size());
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    map <char, int> cnta, cntb;
    for (char c : a) cnta[c]++;
    for (char c : b) cntb[c]++;
    string numerator, denominator;
    for (int c = 'A'; c <= 'Z'; c++) {
        int A = cnta[c];
        int B = cntb[c];
        if (A > B) {
            numerator += char(c);
            if (A - B != 1)
                numerator += to_string(A - B);
        }
        if (B > A) {
            denominator += char(c);
            if (B - A != 1)
                denominator += to_string(B - A);
        }
    }
    if (numerator.empty()) {
        cout << 1 << "/";
        if (denominator.empty()) {
            cout << 1;
        }
        else {
            cout << denominator;
        }
    }
    else {
        cout << numerator << "/";
        if (denominator.empty()) {
            cout << 1 << endl;
        }
        else {
            cout << denominator << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}