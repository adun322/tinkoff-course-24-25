#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


int n, m;

int calc(int i, int j, vector<vector<int>> &a) {
    if (i >= 0 && j >= 0 && i < n && j < m) {
        if (a[i][j] == -1) {
            a[i][j] = calc(i - 2, j - 1, a) + calc(i - 1, j - 2, a);
        }
    } else {
        return 0;
    }
    return a[i][j];
}

void solve() {
    cin >> n >> m;
    vector<vector<int>> adun(n, vector<int>(m, -1));
    adun[0][0] = 1;
    cout << calc(n - 1, m - 1, adun);
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