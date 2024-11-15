#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> adun(n);
    cin >> adun;
    sort(all(adun));
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        int l = -1, r = n, m;
        while (r - l > 1) {
            m = (l + r) / 2;
            if (adun[m] <= x) {
                l = m;
            } else {
                r = m;
            }
        }
        if (adun[l] == x) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
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