#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string S = "BAJTOKLNE";

int getNumber(char c) {
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == c) return i;
    }
}

int w[9][9], used[9];
vector <int> path;

void dfs(int v, int B, int len) {
    path.push_back(v);
    used[v] = 1;
    if (v == B) {
        int ans = len;
        for (int i = 1; i < path.size(); i++) {
            len -= w[path[i - 1]][path[i]];
            ans = min(ans, abs(len));
        }
        cout << ans << endl;
        exit(0);
    }
    for (int i = 0; i < 9; i++) {
        if (w[v][i] > 0 && used[i] == 0) {
            dfs(i, B, len);
        }
    }
    path.pop_back();
}

int main() {
    w[getNumber('A')][getNumber('T')] = 102;
    w[getNumber('A')][getNumber('J')] = 377;
    w[getNumber('A')][getNumber('B')] = 193;
    w[getNumber('B')][getNumber('L')] = 179;
    w[getNumber('L')][getNumber('K')] = 216;
    w[getNumber('L')][getNumber('N')] = 180;
    w[getNumber('J')][getNumber('O')] = 106;
    w[getNumber('O')][getNumber('E')] = 240;

    w[getNumber('T')][getNumber('A')] = 102;
    w[getNumber('J')][getNumber('A')] = 377;
    w[getNumber('B')][getNumber('A')] = 193;
    w[getNumber('L')][getNumber('B')] = 179;
    w[getNumber('K')][getNumber('L')] = 216;
    w[getNumber('N')][getNumber('L')] = 180;
    w[getNumber('O')][getNumber('J')] = 106;
    w[getNumber('E')][getNumber('O')] = 240;

    char A, B;
    int len;
    cin >> A >> B >> len;

    dfs(getNumber(A), getNumber(B), len);
}