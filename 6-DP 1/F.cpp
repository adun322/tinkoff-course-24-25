#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> dp(n * 3 + 10, {1e9, -1});
    dp[1].first = 0;
    for (int i = 1; i < n; ++i) {
        if (dp[i].first + 1 < dp[i + 1].first) {
            dp[i + 1].first = dp[i].first + 1;
            dp[i + 1].second = i;
        }
        if (dp[i].first + 1 < dp[i * 2].first) {
            dp[i * 2].first = dp[i].first + 1;
            dp[i * 2].second = i;
        }
        if (dp[i].first + 1 < dp[i * 3].first) {
            dp[i * 3].first = dp[i].first + 1;
            dp[i * 3].second = i;
        }
    }
    cout << dp[n].first << "\n";
    int i = n;
    vector<int> out;
    while (true) {
        if (dp[i].second == -1) {
            out.push_back(1);
            break;
        }
        out.push_back(i);
        i = dp[i].second;
    }
    reverse(out.begin(), out.end());
    for (auto i : out) {
        cout << i << " ";
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