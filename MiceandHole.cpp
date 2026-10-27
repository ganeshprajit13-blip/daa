#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> mice(n), holes(n);

    for (int& x : mice) cin >> x;
    for (int& x : holes) cin >> x;

    sort(mice.begin(), mice.end());
    sort(holes.begin(), holes.end());

    int ans = 0;

    for (int i = 0; i < n; i++)
        ans = max(ans, abs(mice[i] - holes[i]));

    cout << "Minimum maximum distance: " << ans;
}