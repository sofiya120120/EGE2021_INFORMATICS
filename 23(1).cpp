#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a(100);
    a[1] = 1;
    a[3] = 1;
    for (int i = 4; i <= 16; i++) {
        if (i % 4 == 0) {
            a[i] = a[i - 2] + a[i - 3] + a[i / 4];
        } else {
            a[i] = a[i - 2] + a[i - 3];
        }
    }
    cout << a[16];
}