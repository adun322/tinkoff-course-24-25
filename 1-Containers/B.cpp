#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    string a;
    cin >> a;
    deque<int> adun;
    for (auto i : a) {
        if (i == ')') {
            if (adun.empty() or adun.back() == '[' or adun.back() == '{') {
                cout << "no";
                return;
            } else if (adun.back() == '(') {
                adun.pop_back();
            }
        } else if (i == ']') {
            if (adun.empty() or adun.back() == '(' or adun.back() == '{') {
                cout << "no";
                return;
            } else if (adun.back() == '[') {
                adun.pop_back();
            }
        } else if (i == '}') {
            if (adun.empty() or adun.back() == '(' or adun.back() == '[') {
                cout << "no";
                return;
            } else if (adun.back() == '{') {
                adun.pop_back();
            }
        } else {
            adun.push_back(i);
        }
    }
    if (adun.empty()) {
        cout << "yes";
    } else {
        cout << "no";
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