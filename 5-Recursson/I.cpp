#include <bits/stdc++.h>
using namespace std;

bool check(const vector<int>& q, int row, int col) {
    for (int r = 0; r < row; ++r) {
        int c = q[r];
        if (c == col || abs(c - col) == abs(row - r)) {
            return false;
        }
    }
    return true;
}

void zodumolsya(int n, int row, vector<int>& q, int& ans) {
    if (row == n) {
        ans++;
        return;
    }
    for (int col = 0; col < n; ++col) {
        if (check(q, row, col)) {
            q[row] = col;
            zodumolsya(n, row + 1, q, ans);
            q[row] = -1;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> q(n, -1); 
    int ans = 0;
    zodumolsya(n, 0, q, ans);
    cout << ans;
}