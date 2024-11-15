#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int n, k, s;
    cin >> n >> k;
    vector<int> adun(n);
    ld a;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        adun[i] = a * 100;
    }
    int l = 0, r = *max_element(all(adun)) + 10000000, mid;
    while (l != r) {
        s = 0;
        mid = (l + r) / 2 + 1;
        for (int i = 0; i < n; ++i) {
            s += (int) (adun[i] / mid);
        }
        if (s >= k) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << l / 100;
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