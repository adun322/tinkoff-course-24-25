#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int dp[21][11];

void solve() {
    int n;
    cin >> n;

    for (int j = 1; j < 10; ++j)
        dp[1][j] = 1;

    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < 10; ++j) {
            for (int k = max(0, j - 1); k <= min(j + 1, 9); ++k) {
                dp[i][j] += dp[i - 1][k];
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < 10; ++i) {
        answer += dp[n][i];
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