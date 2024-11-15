#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    int n;
    cin >> n;
    int answer = 0;
    vector<pair<int, int>> st;
    for (int i = 0; i < n; ++i) {
        int f;
        cin >> f;
        while (st.size() && st.back().first != f) {
            if (st.back().second >= 3) {
                answer += st.back().second;
                st.pop_back();
            } else {
                break;
            }
        }
        if (st.empty() || st.back().first != f) {
            st.push_back({f, 1});
        } else {
            st.back().second++;
        }
    }
    while (st.size()) {
        if (st.back().second >= 3) {
            answer += st.back().second;
            st.pop_back();
        } else {
            break;
        }
    }
    cout << answer;
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