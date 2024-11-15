#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int n, x;
    cin >> n;
    set<int> a, b;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        a.insert(x);
    }
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        b.insert(x);
    }
    set<int> out;
    for (auto i : a) {
        if (b.find(i) == b.end()) {
            out.insert(i);
        }
    }
    for (auto i : b) {
        if (a.find(i) == a.end()) {
            out.insert(i);
        }
    }
    cout << out.size() << "\n";
    for (auto i : out) {
        cout << i << "\n";
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