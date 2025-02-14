#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    int l = 1, r = 1e18, mid;
    while (l != r) {
        mid = (l + r) / 2;
        mid -= min(x, y);
        if (mid < 0) {
            l = mid + 1 + min(x, y);
            continue;
        }
        int copys = 1;
        copys += mid / x + mid / y;
        if (copys < n) {
            l = mid + 1 + min(x, y);
        } else {
            r = mid + min(x, y);
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