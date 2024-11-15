#include <bits/stdc++.h>
using namespace std;

int dp[20][200][200], s[200], n, i, j, l, m, p[20][5] = {{2, 4, 6},
                                                        {2, 6, 8},
                                                        {2, 7, 9},
                                                        {2, 4, 8},
                                                        {3, 0, 3, 9},
                                                        {0},
                                                        {3, 0, 1, 7},
                                                        {2, 2, 6},
                                                        {2, 1, 3},
                                                        {2, 2, 4}};

void sum(int *a, int *b, int *c, int *n) {
    int i, t;
    for (i = t = 0; i < *n + 3; i++) {
        t += a[i] + b[i];
        c[i] = t % 10;
        t /= 10;
    }
    *n += 3;
    while (!c[*n]) {
        --*n;
    }
}

int main() {
    for (i = 0; i < 10; i++) {
        dp[i][0][0] = 1;
    }
    cin >> n;
    for (i = 1; i < n; i++) {
        for (j = 0; j < 10; j++) {
            for (dp[j][i][0] = l = 0; l < p[j][0]; l++) {
                m = 100;
                sum(dp[j][i], dp[p[j][l + 1]][i - 1], dp[j][i], &m);
            }
        }
    }
    for (m = 100, i = 1; i < 10; i++) {
        if (i != 8) {
            sum(s, dp[i][n - 1], s, &m);
        }
    }
    for (i = m; i >= 0; i--) {
        cout << s[i];
    }
}