#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, amount;
    cin >> n;

    vector<int> coins(n);
    for (int& c : coins) cin >> c;
    cin >> amount;

    const int INF = 1000000;
    vector<int> dp(amount + 1, INF);
    dp[0] = 0;

    for (int x = 1; x <= amount; x++)
        for (int c : coins)
            if (c <= x && dp[x - c] != INF)
                dp[x] = min(dp[x], dp[x - c] + 1);

    if (dp[amount] == INF) cout << "Not possible";
    else cout << dp[amount];
}