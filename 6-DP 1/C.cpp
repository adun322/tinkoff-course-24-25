#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adun(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> adun[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i != 0 && j != 0) {
                adun[i][j] += max(adun[i - 1][j], adun[i][j - 1]);
            } else if (i != 0) {
                adun[i][j] += adun[i - 1][j];
            } else if (j != 0) {
                adun[i][j] += adun[i][j - 1];
            }
        }
    }
    cout << adun[n - 1][m - 1] << "\n";
    int i = n - 1, j = m - 1;
    vector<char> out;
    while (i != 0 || j != 0) {
        if (i != 0 && j != 0) {
            if (adun[i - 1][j] > adun[i][j - 1]) {
                out.push_back('D');
                i--;
            } else {
                out.push_back('R');
                j--;
            }
        } else if (i != 0) {
            out.push_back('D');
            i--;
        } else if (j != 0) {
            out.push_back('R');
            j--;
        }
    }
    reverse(out.begin(), out.end());
    for (auto x : out) {
        cout << x << " ";
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