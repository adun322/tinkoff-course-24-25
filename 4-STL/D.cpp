#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


struct Student {
    string surname;
    string name;
    string className;
    string birthDate;
    string toString() const {
        return className + " " + surname + " " + name + " " + birthDate;
    }
};

int compareStudents(const Student& a, const Student& b) {
    if (a.className != b.className) {
        if (a.className.size() == 3 && b.className.size() == 2) {
            return 0;
        } else if (a.className.size() == 2 && b.className.size() == 3) {
            return 1;
        } else {
            return a.className < b.className;
        }
    }
    return a.surname < b.surname;
}

void solve() {
    int n;
    cin >> n;
    vector<Student> adun(n);
    for (int i = 0; i < n; ++i) {
        cin >> adun[i].surname >> adun[i].name >> adun[i].className >> adun[i].birthDate;
    }
    sort(adun.begin(), adun.end(), compareStudents);
    for (auto i : adun) {
        cout << i.toString() << "\n";
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