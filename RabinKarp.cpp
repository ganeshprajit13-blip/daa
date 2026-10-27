#include <bits/stdc++.h>
using namespace std;

int main() {
    string t, p;
    cin >> t >> p;

    int n = t.size(), m = p.size();
    int d = 256, q = 101, h = 1;
    int ph = 0, th = 0;

    if (m > n) return 0;

    for (int i = 0; i < m - 1; i++)
        h = (h * d) % q;

    for (int i = 0; i < m; i++) {
        ph = (d * ph + p[i]) % q;
        th = (d * th + t[i]) % q;
    }

    for (int i = 0; i <= n - m; i++) {
        if (ph == th && t.substr(i, m) == p)
            cout << "Match at index " << i << endl;

        if (i < n - m) {
            th = (d * (th - t[i] * h) + t[i + m]) % q;
            if (th < 0) th += q;
        }
    }
    return 0;
}