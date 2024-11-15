#include <algorithm>
#include <iostream>
#include <vector>
#define int long long
#define all(x) x.begin(), x.end()
using namespace std;

const int max_n = 105; 
const int inf = 1e9; 

int dp[max_n][2];

signed main() {
    int n;
    cin >> n;
    vector<int> pos(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> pos[i];
    sort(all(pos));
    dp[1][0] = inf;
    dp[1][1] = 0;

    for (int i = 2; i <= n; i++) {
        dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]) + (pos[i] - pos[i - 1]);
        dp[i][1] = dp[i - 1][0];
    }


    cout << dp[n][0];
    return 0;
}