#include <bits/stdc++.h>
using namespace std;

void pon(int i, int n, char *adun, int c) {
    if (i == n) {
        puts(adun);
    }
    else {
        if (c < n - i) {
            adun[i] = '0';
            pon(i + 1, n, adun, c);
        }
        if (0 < c) {
            adun[i] = '1';
            pon(i + 1, n, adun, c - 1);
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<char> adun(n + 1);
    adun[n] = '\0';
    pon(0, n, adun.data(), k);
}