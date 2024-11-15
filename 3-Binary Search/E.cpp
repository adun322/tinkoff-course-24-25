#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int w, h, n;
    cin >> w >> h >> n;
    int l = 1, r = max(w, h) * n, mid;
    while (l != r) {
        mid = (l + r) / 2;
        ld p = ((ld)(mid / w) * (mid / h));
        if (p < n) {
            l = mid + 1;
        } else {
            r = mid;
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