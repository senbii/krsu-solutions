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
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define all(x) x.begin(), x.end()
#define dbl double

using namespace std;

int isGlass(char ch) {
    if (ch == 'A' || ch == 'E' ||
        ch == 'I' || ch == 'O' ||
        ch == 'Y' || ch == 'U') return 1;
    return 0;
}

void solve() {
    int n, j;
    string str;
    cin >> n >> str;
    if (n == 2) {
        if (str == "MEN") {
            cout << "MENIN";
            return;
        }if (str == "SEN") {
            cout << "SENIN";
            return;
        }if (str == "AL") {
            cout << "ANYN";
            return;
        }
        char c = str[str.size() - 1];
        if (isGlass(c)) {
            if (c == 'A') {
                cout << str + "NYN";
            }if (c == 'E') {
                cout << str + "NIN";
            }if (c == 'I') {
                cout << str + "NIN";
            }if (c == 'O') {
                cout << str + "NUN";
            }if (c == 'U') {
                cout << str + "NUN";
            }if (c == 'Y') {
                cout << str + "NYN";
            }
        }
        else {
            j = 2;
            char c = str[str.size() - j];
            while (true) {
                if (isGlass(c)) break;
                j++;
                c = str[str.size() - j];
            }
            char c2 = str[str.size() - 1];
            cout << str;
            if (c2 == 'B') {
                cout << "T";
            }if (c2 == 'D') {
                cout << "D";
            }if (c2 == 'G') {
                cout << "D";
            }if (c2 == 'K') {
                cout << "T";
            }if (c2 == 'L') {
                cout << "D";
            }if (c2 == 'M') {
                cout << "D";
            }if (c2 == 'N') {
                cout << "D";
            }if (c2 == 'P') {
                cout << "T";
            }if (c2 == 'R') {
                cout << "D";
            }if (c2 == 'S') {
                cout << "T";
            }if (c2 == 'T') {
                cout << "T";
            }
            if (c == 'A') {
                cout << "YN";
            }if (c == 'E') {
                cout << "IN";
            }if (c == 'I') {
                cout << "IN";
            }if (c == 'O') {
                cout << "UN";
            }if (c == 'U') {
                cout << "UN";
            }if (c == 'Y') {
                cout << "YN";
            }
        }
    }
    else if (n == 3) {
        if (str == "MEN") {
            cout << "MAGA";
            return;
        }if (str == "SEN") {
            cout << "SAGA";
            return;
        }if (str == "AL") {
            cout << "AGA";
            return;
        }
        char c = str[str.size() - 1];
        if (isGlass(c)) {
            cout << str;
            if (c == 'A') {
                cout << "GA";
            }if (c == 'E') {
                cout << "GE";
            }if (c == 'I') {
                cout << "GE";
            }if (c == 'O') {
                cout << "GO";
            }if (c == 'U') {
                cout << "GA";
            }if (c == 'Y') {
                cout << "GA";
            }
        }
        else {
            j = 2;
            char c = str[str.size() - j];
            while (true) {
                if (isGlass(c)) break;
                j++;
                c = str[str.size() - j];
            }
            char c2 = str[str.size() - 1];
            cout << str;
            if (c2 == 'B') {
                cout << "K";
            }if (c2 == 'D') {
                cout << "G";
            }if (c2 == 'G') {
                cout << "G";
            }if (c2 == 'K') {
                cout << "K";
            }if (c2 == 'L') {
                cout << "G";
            }if (c2 == 'M') {
                cout << "G";
            }if (c2 == 'N') {
                cout << "G";
            }if (c2 == 'P') {
                cout << "K";
            }if (c2 == 'R') {
                cout << "G";
            }if (c2 == 'S') {
                cout << "K";
            }if (c2 == 'T') {
                cout << "K";
            }
            if (c == 'A') {
                cout << "A";
            }if (c == 'E') {
                cout << "E";
            }if (c == 'I') {
                cout << "E";
            }if (c == 'O') {
                cout << "O";
            }if (c == 'U') {
                cout << "A";
            }if (c == 'Y') {
                cout << "A";
            }
        }
    }
    else if (n == 4) {
        if (str == "MEN") {
            cout << "MENI";
            return;
        }if (str == "SEN") {
            cout << "SENI";
            return;
        }if (str == "AL") {
            cout << "ANY";
            return;
        }
        char c = str[str.size() - 1];
        if (isGlass(c)) {
            cout << str;
            if (c == 'A') {
                cout << "NY";
            }if (c == 'E') {
                cout << "NI";
            }if (c == 'I') {
                cout << "NI";
            }if (c == 'O') {
                cout << "NU";
            }if (c == 'U') {
                cout << "NU";
            }if (c == 'Y') {
                cout << "NY";
            }
        }
        else {
            j = 2;
            char c = str[str.size() - j];
            while (true) {
                if (isGlass(c)) break;
                j++;
                c = str[str.size() - j];
            }
            char c2 = str[str.size() - 1];
            cout << str;
            if (c2 == 'B') {
                cout << "T";
            }if (c2 == 'D') {
                cout << "D";
            }if (c2 == 'G') {
                cout << "D";
            }if (c2 == 'K') {
                cout << "T";
            }if (c2 == 'L') {
                cout << "D";
            }if (c2 == 'M') {
                cout << "D";
            }if (c2 == 'N') {
                cout << "D";
            }if (c2 == 'P') {
                cout << "T";
            }if (c2 == 'R') {
                cout << "D";
            }if (c2 == 'S') {
                cout << "T";
            }if (c2 == 'T') {
                cout << "T";
            }
            if (c == 'A') {
                cout << "Y";
            }if (c == 'E') {
                cout << "I";
            }if (c == 'I') {
                cout << "I";
            }if (c == 'O') {
                cout << "U";
            }if (c == 'U') {
                cout << "U";
            }if (c == 'Y') {
                cout << "Y";
            }
        }
    }
    else if (n == 5) {
        if (str == "AL") {
            cout << "ANDA";
            return;
        }
        char c = str[str.size() - 1];
        if (isGlass(c)) {
            cout << str;
            if (c == 'A') {
                cout << "DA";
            }if (c == 'E') {
                cout << "DE";
            }if (c == 'I') {
                cout << "DE";
            }if (c == 'O') {
                cout << "DO";
            }if (c == 'U') {
                cout << "DA";
            }if (c == 'Y') {
                cout << "DA";
            }
        }
        else {
            j = 2;
            char c = str[str.size() - j];
            while (true) {
                if (isGlass(c)) break;
                j++;
                c = str[str.size() - j];
            }
            char c2 = str[str.size() - 1];
            cout << str;
            if (c2 == 'B') {
                cout << "T";
            }if (c2 == 'D') {
                cout << "D";
            }if (c2 == 'G') {
                cout << "D";
            }if (c2 == 'K') {
                cout << "T";
            }if (c2 == 'L') {
                cout << "D";
            }if (c2 == 'M') {
                cout << "D";
            }if (c2 == 'N') {
                cout << "D";
            }if (c2 == 'P') {
                cout << "T";
            }if (c2 == 'R') {
                cout << "D";
            }if (c2 == 'S') {
                cout << "T";
            }if (c2 == 'T') {
                cout << "T";
            }
            if (c == 'A') {
                cout << "A";
            }if (c == 'E') {
                cout << "E";
            }if (c == 'I') {
                cout << "E";
            }if (c == 'O') {
                cout << "O";
            }if (c == 'U') {
                cout << "A";
            }if (c == 'Y') {
                cout << "A";
            }
        }
    }
    else if (n == 6) {
        if (str == "AL") {
            cout << "ANDAN";
            return;
        }
        char c = str[str.size() - 1];
        if (isGlass(c)) {
            cout << str;
            if (c == 'A') {
                cout << "DAN";
            }if (c == 'E') {
                cout << "DEN";
            }if (c == 'I') {
                cout << "DEN";
            }if (c == 'O') {
                cout << "DON";
            }if (c == 'U') {
                cout << "DAN";
            }if (c == 'Y') {
                cout << "DAN";
            }
        }
        else {
            j = 2;
            char c = str[str.size() - j];
            while (true) {
                if (isGlass(c)) break;
                j++;
                c = str[str.size() - j];
            }
            char c2 = str[str.size() - 1];
            cout << str;
            if (c2 == 'B') {
                cout << "T";
            }if (c2 == 'D') {
                cout << "D";
            }if (c2 == 'G') {
                cout << "D";
            }if (c2 == 'K') {
                cout << "T";
            }if (c2 == 'L') {
                cout << "D";
            }if (c2 == 'M') {
                cout << "D";
            }if (c2 == 'N') {
                cout << "D";
            }if (c2 == 'P') {
                cout << "T";
            }if (c2 == 'R') {
                cout << "D";
            }if (c2 == 'S') {
                cout << "T";
            }if (c2 == 'T') {
                cout << "T";
            }
            if (c == 'A') {
                cout << "AN";
            }if (c == 'E') {
                cout << "EN";
            }if (c == 'I') {
                cout << "EN";
            }if (c == 'O') {
                cout << "ON";
            }if (c == 'U') {
                cout << "AN";
            }if (c == 'Y') {
                cout << "AN";
            }
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
/*
/*
by: senb1
*/

#include <iostream>
#include <algorithm>
#include <deque>

#define ll long long
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define all(x) x.begin(), x.end()
#define fr first
#define sc second
#define mk make_pair

using namespace std;

ll bp(ll a, ll n) {
    if (n == 0) return 1;
    if (n % 2) return bp(a, n - 1) * a;
    ll b = bp(a, n / 2);
    return b * b;
}
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 2) {
        if (s[s.size() - 1] == 'A' || s[s.size() - 1] == 'E' || s[s.size() - 1] == 'O' || s[s.size() - 1] == 'I' || s[s.size() - 1] == 'U' || s[s.size() - 1] == 'Y') {
            if (s[s.size() - 1] == 'A') {
                cout << s << "NYN";
                return;
            }
            if (s[s.size() - 1] == 'E') {
                cout << s << "NIN";
                return;
            }
            if (s[s.size() - 1] == 'O') {
                cout << s << "NUN";
                return;
            }
            if (s[s.size() - 1] == 'I') {
                cout << s << "NIN";
                return;
            }
            if (s[s.size() - 1] == 'U') {
                cout << s << "NUN";
                return;
            }
            if (s[s.size() - 1] == 'Y') {
                cout << s << "NYN";
                return;
            }
        }
        else {
            if (s[s.size() - 1] == 'L' || s[s.size() - 1] == 'M' || s[s.size() - 1] == 'N') {
                char ch = '1';
                for (int i = s.size() - 1; i >= 0; i--) {
                    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y') {
                        ch = s[i];
                        break;
                    }
                }
                if (ch == '1') {
                    cout << s << "NYN";
                    return;
                }
                if (ch == 'A') {
                    cout << s << "DYN";
                    return;
                }
                if (ch == 'E') {
                    cout << s << "DIN";
                    return;
                }
                if (ch == 'O') {
                    cout << s << "DUN";
                    return;
                }
                if (ch == 'I') {
                    cout << s << "DIN";
                    return;
                }
                if (ch == 'U') {
                    cout << s << "DUN";
                    return;
                }
                if (ch == 'Y') {
                    cout << s << "DYN";
                    return;
                }
            }
            else {
                char ch = '1';
                for (int i = s.size() - 1; i >= 0; i--) {
                    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y') {
                        ch = s[i];
                        break;
                    }
                }
                if (ch == '1') {
                    cout << s << "NYN";
                    return;
                }
                if (ch == 'A') {
                    cout << s << "TYN";
                    return;
                }
                if (ch == 'E') {
                    cout << s << "TIN";
                    return;
                }
                if (ch == 'O') {
                    cout << s << "TUN";
                    return;
                }
                if (ch == 'I') {
                    cout << s << "TIN";
                    return;
                }
                if (ch == 'U') {
                    cout << s << "TUN";
                    return;
                }
                if (ch == 'Y') {
                    cout << s << "TYN";
                    return;
                }
            }
        }
    }
    if (n == 3) {
        if (s[s.size() - 1] == 'A' || s[s.size() - 1] == 'E' || s[s.size() - 1] == 'O' || s[s.size() - 1] == 'I' || s[s.size() - 1] == 'U' || s[s.size() - 1] == 'Y') {
            if (s[s.size() - 1] == 'A') {
                cout << s << "GA";
                return;
            }
            if (s[s.size() - 1] == 'E') {
                cout << s << "GE";
                return;
            }
            if (s[s.size() - 1] == 'O') {
                cout << s << "GO";
                return;
            }
            if (s[s.size() - 1] == 'I') {
                cout << s << "GE";
                return;
            }
            if (s[s.size() - 1] == 'U') {
                cout << s << "GA";
                return;
            }
            if (s[s.size() - 1] == 'Y') {
                cout << s << "GA";
                return;
            }
        }
        else {
            if (s[s.size() - 1] == 'K' || s[s.size() - 1] == 'B' || s[s.size() - 1] == 'D' || s[s.size() - 1] == 'P' || s[s.size() - 1] == 'S' || s[s.size() - 1] == 'T') {
                char ch = '1';
                for (int i = s.size() - 1; i >= 0; i--) {
                    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y') {
                        ch = s[i];
                        break;
                    }
                }
                if (ch == '1') {
                    cout << s << "GA";
                    return;
                }
                if (ch == 'A') {
                    cout << s << "KA";
                    return;
                }
                if (ch == 'E') {
                    cout << s << "KE";
                    return;
                }
                if (ch == 'O') {
                    cout << s << "KO";
                    return;
                }
                if (ch == 'I') {
                    cout << s << "KE";
                    return;
                }
                if (ch == 'U') {
                    cout << s << "KA";
                    return;
                }
                if (ch == 'Y') {
                    cout << s << "KA";
                    return;
                }
            }
            else {
                char ch = '1';
                for (int i = s.size() - 1; i >= 0; i--) {
                    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y') {
                        ch = s[i];
                        break;
                    }
                }
                if (ch == '1') {
                    cout << s << "GA";
                    return;
                }
                if (ch == 'A') {
                    cout << s << "GA";
                    return;
                }
                if (ch == 'E') {
                    cout << s << "GE";
                    return;
                }
                if (ch == 'O') {
                    cout << s << "GO";
                    return;
                }
                if (ch == 'I') {
                    cout << s << "GE";
                    return;
                }
                if (ch == 'U') {
                    cout << s << "GA";
                    return;
                }
                if (ch == 'Y') {
                    cout << s << "GA";
                    return;
                }
            }
        }
    }
    if (n == 4) {
        if (s[s.size() - 1] == 'A' || s[s.size() - 1] == 'E' || s[s.size() - 1] == 'O' || s[s.size() - 1] == 'I' || s[s.size() - 1] == 'U' || s[s.size() - 1] == 'Y') {
            if (s[s.size() - 1] == 'A') {
                cout << s << "NY";
                return;
            }
            if (s[s.size() - 1] == 'E') {
                cout << s << "NI";
                return;
            }
            if (s[s.size() - 1] == 'O') {
                cout << s << "NU";
                return;
            }
            if (s[s.size() - 1] == 'I') {
                cout << s << "NI";
                return;
            }
            if (s[s.size() - 1] == 'U') {
                cout << s << "NU";
                return;
            }
            if (s[s.size() - 1] == 'Y') {
                cout << s << "NY";
                return;
            }
        }
        else {
            if (s[s.size() - 1] == 'K' || s[s.size() - 1] == 'B' || s[s.size() - 1] == 'D' || s[s.size() - 1] == 'P' || s[s.size() - 1] == 'S' || s[s.size() - 1] == 'T') {
                char ch = '1';
                for (int i = s.size() - 1; i >= 0; i--) {
                    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y') {
                        ch = s[i];
                        break;
                    }
                }
                if (ch == '1') {
                    cout << s << "NY";
                    return;
                }
                if (ch == 'A') {
                    cout << s << "TY";
                    return;
                }
                if (ch == 'E') {
                    cout << s << "TI";
                    return;
                }
                if (ch == 'O') {
                    cout << s << "TU";
                    return;
                }
                if (ch == 'I') {
                    cout << s << "TI";
                    return;
                }
                if (ch == 'U') {
                    cout << s << "TU";
                    return;
                }
                if (ch == 'Y') {
                    cout << s << "TY";
                    return;
                }
            }
            else {
                char ch = '1';
                for (int i = s.size() - 1; i >= 0; i--) {
                    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y') {
                        ch = s[i];
                        break;
                    }
                }
                if (ch == '1') {
                    cout << s << "NY";
                    return;
                }
                if (ch == 'A') {
                    cout << s << "DY";
                    return;
                }
                if (ch == 'E') {
                    cout << s << "DI";
                    return;
                }
                if (ch == 'O') {
                    cout << s << "DU";
                    return;
                }
                if (ch == 'I') {
                    cout << s << "DI";
                    return;
                }
                if (ch == 'U') {
                    cout << s << "DU";
                    return;
                }
                if (ch == 'Y') {
                    cout << s << "DY";
                    return;
                }
            }
        }
    }
    if (n == 5) {
        if (s[s.size() - 1] == 'A' || s[s.size() - 1] == 'E' || s[s.size() - 1] == 'O' || s[s.size() - 1] == 'I' || s[s.size() - 1] == 'U' || s[s.size() - 1] == 'Y') {
            if (s[s.size() - 1] == 'A') {
                cout << s << "DA";
                return;
            }
            if (s[s.size() - 1] == 'E') {
                cout << s << "DE";
                return;
            }
            if (s[s.size() - 1] == 'O') {
                cout << s << "DO";
                return;
            }
            if (s[s.size() - 1] == 'I') {
                cout << s << "DE";
                return;
            }
            if (s[s.size() - 1] == 'U') {
                cout << s << "DA";
                return;
            }
            if (s[s.size() - 1] == 'Y') {
                cout << s << "DA";
                return;
            }
        }
        else {
            if (s[s.size() - 1] == 'K' || s[s.size() - 1] == 'B' || s[s.size() - 1] == 'D' || s[s.size() - 1] == 'P' || s[s.size() - 1] == 'S' || s[s.size() - 1] == 'T') {
                char ch = '1';
                for (int i = s.size() - 1; i >= 0; i--) {
                    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y') {
                        ch = s[i];
                        break;
                    }
                }
                if (ch == '1') {
                    cout << s << "DA";
                    return;
                }
                if (ch == 'A') {
                    cout << s << "TA";
                    return;
                }
                if (ch == 'E') {
                    cout << s << "TE";
                    return;
                }
                if (ch == 'O') {
                    cout << s << "TO";
                    return;
                }
                if (ch == 'I') {
                    cout << s << "TE";
                    return;
                }
                if (ch == 'U') {
                    cout << s << "TA";
                    return;
                }
                if (ch == 'Y') {
                    cout << s << "TA";
                    return;
                }
            }
            else {
                char ch = '1';
                for (int i = s.size() - 1; i >= 0; i--) {
                    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y') {
                        ch = s[i];
                        break;
                    }
                }
                if (ch == '1') {
                    cout << s << "DA";
                    return;
                }
                if (ch == 'A') {
                    cout << s << "DA";
                    return;
                }
                if (ch == 'E') {
                    cout << s << "DE";
                    return;
                }
                if (ch == 'O') {
                    cout << s << "DO";
                    return;
                }
                if (ch == 'I') {
                    cout << s << "DE";
                    return;
                }
                if (ch == 'U') {
                    cout << s << "DA";
                    return;
                }
                if (ch == 'Y') {
                    cout << s << "DA";
                    return;
                }
            }
        }
    }
    if (n == 6) {
        if (s[s.size() - 1] == 'A' || s[s.size() - 1] == 'E' || s[s.size() - 1] == 'O' || s[s.size() - 1] == 'I' || s[s.size() - 1] == 'U' || s[s.size() - 1] == 'Y') {
            if (s[s.size() - 1] == 'A') {
                cout << s << "DAN";
                return;
            }
            if (s[s.size() - 1] == 'E') {
                cout << s << "DEN";
                return;
            }
            if (s[s.size() - 1] == 'O') {
                cout << s << "DON";
                return;
            }
            if (s[s.size() - 1] == 'I') {
                cout << s << "DEN";
                return;
            }
            if (s[s.size() - 1] == 'U') {
                cout << s << "DAN";
                return;
            }
            if (s[s.size() - 1] == 'Y') {
                cout << s << "DAN";
                return;
            }
        }
        else {
            if (s[s.size() - 1] == 'K' || s[s.size() - 1] == 'B' || s[s.size() - 1] == 'D' || s[s.size() - 1] == 'P' || s[s.size() - 1] == 'S' || s[s.size() - 1] == 'T') {
                char ch = '1';
                for (int i = s.size() - 1; i >= 0; i--) {
                    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y') {
                        ch = s[i];
                        break;
                    }
                }
                if (ch == '1') {
                    cout << s << "DAN";
                    return;
                }
                if (ch == 'A') {
                    cout << s << "TAN";
                    return;
                }
                if (ch == 'E') {
                    cout << s << "TEN";
                    return;
                }
                if (ch == 'O') {
                    cout << s << "TON";
                    return;
                }
                if (ch == 'I') {
                    cout << s << "TEN";
                    return;
                }
                if (ch == 'U') {
                    cout << s << "TAN";
                    return;
                }
                if (ch == 'Y') {
                    cout << s << "TAN";
                    return;
                }
            }
            else {
                char ch = '1';
                for (int i = s.size() - 1; i >= 0; i--) {
                    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' || s[i] == 'Y') {
                        ch = s[i];
                        break;
                    }
                }
                if (ch == '1') {
                    cout << s << "DAN";
                    return;
                }
                if (ch == 'A') {
                    cout << s << "DAN";
                    return;
                }
                if (ch == 'E') {
                    cout << s << "DEN";
                    return;
                }
                if (ch == 'O') {
                    cout << s << "DON";
                    return;
                }
                if (ch == 'I') {
                    cout << s << "DEN";
                    return;
                }
                if (ch == 'U') {
                    cout << s << "DAN";
                    return;
                }
                if (ch == 'Y') {
                    cout << s << "DAN";
                    return;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}
*/