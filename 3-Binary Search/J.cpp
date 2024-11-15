#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> adun1(n), adun2(k);
    cin >> adun1 >> adun2;
    for (auto i : adun2) {
        int l = 0, r = n - 1, m;
        while (r - l > 1) {
            m = (l + r) / 2;
            if (adun1[m] < i) {
                l = m;
            } else {
                r = m;
            }
        }
        if (i - adun1[l] <= adun1[r] - i) {
            cout << adun1[l] << "\n";
        } else {
            cout << adun1[r] << "\n";
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