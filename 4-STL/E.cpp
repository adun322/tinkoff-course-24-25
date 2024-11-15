#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    string s;
    map<string, vector<string>> pon;
    vector<string> adun;
    while (cin >> s) {
        adun.push_back(s);
    }
    int i = 0;
    string prev = "&";
    while (i < adun.size()) {
        if (adun[i] == "-") {
            ++i;
            while (adun[i][adun[i].size() - 1] == ',') {
                pon[adun[i].substr(0, adun[i].size() - 1)].push_back(prev);
                ++i;
            }
            pon[adun[i]].push_back(prev);
            ++i;
        }
        if (i >= adun.size()) {
            break;
        }
        prev = adun[i];
        ++i;
    }
    cout << pon.size() << "\n";
    for (auto i : pon) {
        cout << i.first << " - ";
        sort(i.second.begin(), i.second.end());
        for (int j = 0; j < i.second.size(); ++j) {
            if (j != i.second.size() - 1) {
                cout << i.second[j] << ", ";
            } else {
                cout << i.second[j] << "\n";
            }
        }
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