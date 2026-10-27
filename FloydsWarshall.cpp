#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int INF = 1000000000;
    vector<vector<int>> d(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> d[i][j];
            if (d[i][j] == -1) d[i][j] = INF;
        }

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (d[i][k] != INF && d[k][j] != INF)
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (d[i][j] == INF) cout << "INF ";
            else cout << d[i][j] << " ";
        cout << endl;
    }
}