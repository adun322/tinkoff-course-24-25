#include <bits/stdc++.h>

using namespace std;
#define int long long

int co(vector<int> &adun, int K) {
    unordered_map<int, int> pon;
    int c = 0;
    for (int num: adun) {
        int com = K - num;
        if (pon.find(com) != pon.end()) {
            c += pon[com];
        }
        pon[num]++;
    }

    return c;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> adun(n);
        for (int i = 0; i < n; i++) {
            cin >> adun[i];
        }
        cout << co(adun, k) << "\n";
    }

    return 0;
}