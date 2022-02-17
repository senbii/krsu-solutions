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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

using namespace std;

int bp(int a, int n) {
    if (n == 0) return 1;
    if (n % 2) return bp(a, n - 1) * a;
    int b = bp(a, n / 2);
    return b * b;
}

const int catN = 51;
ll cat[catN];

void catnums(int n) {
    cat[0] = cat[1] = 1;
    for (int i = 2; i <= n; i++)
        for (int j = 0; j < i; j++)
            cat[i] += cat[j] * cat[i - j - 1];
    cout << cat[n];
}

void solve() {
    int q;
    cin >> q;
    int ans = 0;
    while (q > 40) {
        ans += 5;
        q -= 200;
        if (q > 0) ans += 3;
    }
    while (q > 0) {
        ans++;
        q -= 20;
        if (q > 0) ans++;
    }
    cout << ans;
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
є 1. яЅЋќ ». —ейчас в селе у одного человека есть Q кг €блок
(натуральное число Q < 500), есть осел с телегой (груз Ц не более 200 кг и
один человек, скорость с грузом - +5, скорость без груза - +3) и
лошадь (груз Ц не более 20 кг и один человек, скорость +1). Ќайти
минимальное врем€ (в часах) дл€ доставки всех €блок на базар.
ќсла с телегой, лошадь вне села оставл€ть нельз€. ¬рем€ на отдых не
учитывать.
Ќапример: Q=21 -> 3.
*/