#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int q;
    cin >> q;
    deque<int> a, m;
    while (q--) {
        int n, x;
        cin >> n;
        if (n == 1) {
            cin >> x;
            a.push_back(x);
            while (!m.empty() and x < m.back()) {
                m.pop_back();
            }
            m.push_back(x);
        } else if (n == 2) {
            cout << a[0] << "\n";
            if (a[0] == m[0]) {
                m.pop_front();
            }
            a.pop_front();
        } else if (n == 3) {
            cin >> x;
            cout << a[x - 1] << "\n";
        }  else {
            cout << m[0] << "\n";
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