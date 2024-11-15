#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int n;
    cin >> n;
    int a, b;
    deque<int> adun;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a == 0) {
            cin >> b;
            adun.push_back(b);
        } else {
            int c, d;
            c = adun.back();
            adun.pop_back();
            d = adun.back();
            adun.pop_back();
            if (a == 1) {
                adun.push_back(c + d);
            } else if (a == 2) {
                adun.push_back(d - c);
            } else {
                adun.push_back(c * d);
            }
        }
    }
    cout << adun.back();
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