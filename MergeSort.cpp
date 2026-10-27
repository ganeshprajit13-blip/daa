#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& a, int l, int r) {
    if (l >= r) return;

    int mid = l + (r - l) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);

    vector<int> temp;
    int i = l, j = mid + 1;

    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) temp.push_back(a[i++]);
        else temp.push_back(a[j++]);
    }

    while (i <= mid) temp.push_back(a[i++]);
    while (j <= r) temp.push_back(a[j++]);

    for (int k = 0; k < (int)temp.size(); k++)
        a[l + k] = temp[k];
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int& x : a) cin >> x;

    mergeSort(a, 0, n - 1);

    for (int x : a) cout << x << " ";
}