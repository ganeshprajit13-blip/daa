#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    vector<int> a(n);
    for (int& x : a) cin >> x;

    cin >> key;

    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (a[mid] == key) {
            cout << "Found at index " << mid;
            return 0;
        } else if (a[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }

    cout << "Not found";
}
