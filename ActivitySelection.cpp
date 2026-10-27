#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end(),
         [](auto x, auto y) {
             return x.second < y.second;
         });

    int count = 0, lastEnd = INT_MIN;

    for (auto x : a) {
        if (x.first >= lastEnd) {
            cout << "(" << x.first << "," << x.second << ") ";
            lastEnd = x.second;
            count++;
        }
    }

    cout << "\nMaximum activities: " << count;
}