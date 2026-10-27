#include <bits/stdc++.h>
using namespace std;

int main() {
    string text, pat;
    cin >> text >> pat;

    int n = text.size(), m = pat.size();

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++)
            if (text[i + j] != pat[j])
                break;

        if (j == m)
            cout << "Pattern found at index " << i << endl;
    }
    return 0;
}