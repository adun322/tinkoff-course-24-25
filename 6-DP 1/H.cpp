#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int dp[21][3];

void solve() {
    int n;
    cin >> n;
    dp[1][0] = dp[1][1] = dp[1][2] = 1;

    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (j == k && k == 0) continue;

                dp[i][j] += dp[i - 1][k];
            }
        }
    }

    cout << dp[n][0] + dp[n][1] + dp[n][2];
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