#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < 0) {
        a = -a;
        b = -b;
        c = -c;
        d = -d;
    }
    ld l = -1e6, r = 1e6, m;
    for (int i = 0; i < 100; ++i) {
        m = (l + r) / 2;
        if (a * (m * m * m) + b * (m * m) + c * m + d <= 0) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << l;
}


signed main() {
    cout << fixed << setprecision(20);
#ifdef LOCAL
    freopen("C:\\Users\\adun\\Desktop\\c++\\input.txt", "r", stdin);
    freopen("C:\\Users\\adun\\Desktop\\c++\\output.txt", "w", stdout);
#else
    //freopen("palindrome.in", "r", stdin);
    //freopen("palindrome.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
#endif
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
    }
}