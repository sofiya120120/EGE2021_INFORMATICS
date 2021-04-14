#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a(100);
    a[23] = 1;
    for (int i = 23; i >= 1; i--) {
        if (i > 2) {
            a[i - 2] += a[i];
        }
        if (i % 3 != 0) {
            a[(i / 3) * 3] += a[i];
        }
    }
    cout << a[1];
}