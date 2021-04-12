#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    int n, S;
    cin >> S >> n;
    vector<int> a(n);
    int sum = 0, c = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if(sum + a[i] <= S) {
            sum += a[i];
            mx = a[i];
            c++;
        } else if (sum - mx + a[i] <= S) {
            sum = sum - mx + a[i];
            mx = a[i];
        }
    }
    cout << c << " " << mx << " ";
}