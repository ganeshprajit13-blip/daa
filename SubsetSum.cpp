#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    vector<int> a(n);
    for (int& x : a) cin >> x;
    cin >> target;

    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int x : a)
        for (int s = target; s >= x; s--)
            dp[s] = dp[s] || dp[s - x];

    cout << (dp[target] ? "Subset exists" : "No subset");
}