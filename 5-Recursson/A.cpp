#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < (int)(powl(2, n)); ++i) {
        string s = "";
        int x = i;
        while (x != 0) {
            s += to_string(x % 2);
            x /= 2;
        }
        reverse(s.begin(), s.end());
        string ad = "";
        while (ad.size() != n - s.size()) {
            ad += '0';
        }
        cout << ad + s << "\n";
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