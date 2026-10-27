#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int start = 0, best = 0, n = s.size();

    auto expand = [&](int l, int r) {
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > best) {
                start = l;
                best = r - l + 1;
            }
            l--;
            r++;
        }
    };

    for (int i = 0; i < n; i++) {
        expand(i, i);       // Odd length
        expand(i, i + 1);   // Even length
    }

    cout << s.substr(start, best);
}