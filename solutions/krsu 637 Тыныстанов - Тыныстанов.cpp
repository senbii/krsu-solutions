/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define ll long long
#define str string
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define all(x) x.begin(), x.end()
#define dbl double
#define rall(x) x.rbegin(), x.rend()
#define for i in range(x,y) for (int i = x; i < y; i++)
#define 

using namespace std;

bool vowel(char u) {
    if (u == 'A' || u == 'E' || u == 'I' || u == 'O' || u == 'Y')
        return true;
    return false;
}

bool check(string c) {
    int cnt = 0, cur = -1;
    for (int i = 0; i < c.size(); i++) {
        if (vowel(c[i])) {
            if (cur == -1)
               	cur = c[i];
            else {
               	if (c[i] != cur)
                    return 0;
            }
        }
    }
    return true;
}

void solve() {
    str a, b;
    cin >> a;
    b = a;
    for (int i = (a[5] - 'A') + 1; i < 26; i++) {
        b[5] = char(i + 'A');
        if (check(b)) {
            int cn = 0;
	    
            for (int i = 0; i < 6; i++) {
                if (vowel(b[i]))
                    cn++;
            }
	    
            if (cn > 0) {
                cout << b << endl;
                return;
            }
        }
    }
    for (int i = (a[4] - 'A') + 1; i < 26; i++) {
        b[4] = char(i + 'A');
        if (check(b)) {
            int cn = 0;
            char ch;
	    
            for (int i = 0; i < 5; i++) {
                if (vowel(b[i])) {
                    ch = b[i];
		            cn++;
		        }
                cout << b[i];
            }
            if (ch == 'A') cn = 0;
		
            if (cn == 0) cout << 'A';
            else cout << 'B';
            return;
        }
    }
    for (int i = (a[3] - 'A') + 1; i < 26; i++) {
        b[3] = char(i + 'A');
        if (check(b)) {
            int cn = 0;
            char ch;

            for (int i = 0; i < 4; i++) {
                if (vowel(b[i])) {
                    ch = b[i];
                    cn++;
                }
                cout << b[i];
            }
            if (ch == 'A') cn = 0;

            if (cn == 0) cout << "AA";
            else cout << "BB";
            return;
        }
    }
    for (int i = (a[2] - 'A') + 1; i < 26; i++) {
        b[2] = char(i + 'A');
        if (check(b)) {
            int cn = 0;
            char ch;

            for (int i = 0; i < 3; i++) {
                if (vowel(b[i])) {
                    ch = b[i];
                    cn++;
                }
                cout << b[i];
            }
            if (ch == 'A') cn = 0;

            if (cn == 0) cout << "AAA";
            else cout << "BBB";
            return;
        }
    }
    for (int i = (a[1] - 'A') + 1; i < 26; i++) {
        b[1] = char(i + 'A');
        if (check(b)) {
            int cn = 0;
            char ch;

            for (int i = 0; i < 2; i++) {
                if (vowel(b[i])) {
                    ch = b[i];
                    cn++;
                }
                cout << b[i];
            }
            if (ch == 'A') cn = 0;

            if (cn == 0) cout << "AAAA";
            else cout << "BBBB";
            return;
        }
    }
    for (int i = (a[0] - 'A') + 1; i < 26; i++) {
        b[0] = char(i + 'A');
        if (check(b)) {
            int cn = 0;
            char ch;

            for (int i = 0; i < 1; i++) {
                if (vowel(b[i])) {
                    ch = b[i];
                    cn++;
                }
                cout << b[i];
            }
            if (ch == 'A') cn = 0;

            if (cn == 0) cout << "AAAAA";
            else cout << "BBBBB";
            return;
        }
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
