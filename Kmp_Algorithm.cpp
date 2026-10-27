#include <bits/stdc++.h>
using namespace std;

int main() {
    string t, p;
    cin >> t >> p;

    int n = t.size(), m = p.size();
    vector<int> lps(m, 0);

    for (int i = 1, len = 0; i < m;) {
        if (p[i] == p[len])
            lps[i++] = ++len;
        else if (len)
            len = lps[len - 1];
        else
            lps[i++] = 0;
    }

    for (int i = 0, j = 0; i < n;) {
        if (t[i] == p[j]) i++, j++;

        if (j == m) {
            cout << "Match at index " << i - j << endl;
            j = lps[j - 1];
        } else if (i < n && t[i] != p[j]) {
            if (j) j = lps[j - 1];
            else i++;
        }
    }
    return 0;
}