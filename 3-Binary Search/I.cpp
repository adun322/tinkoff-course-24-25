#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> adun(n);
    cin >> adun;
    int l = 0, r = 9e9, mid;
    while (l != r) {
        mid = (l + r) / 2 + 1;
        int c = 1, pi = 0;
        for (int i = 1; i < n; ++i) {
            if (adun[i] - adun[pi] >= mid) {
                pi = i;
                ++c;
            }
        }
        if (c >= k) {
            l = mid;
        } else {
            r = mid - 1;
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