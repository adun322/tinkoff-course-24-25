#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int n;
    cin >> n;
    stack<int> s, ms;
    for (int i = 0; i < n; ++i) {
        int type, x;
        cin >> type;
        if (type == 1) {
            cin >> x;
            s.push(x);
            if (ms.empty() || x <= ms.top()) {
                ms.push(x);
            }
        } else if (type == 2) {
            if (s.top() == ms.top()) {
                ms.pop();
            }
            cout << s.top() << "\n";
            s.pop();
        } else if (type == 3) {
            cout << ms.top() << "\n";
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