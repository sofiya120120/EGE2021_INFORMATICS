#include <bits/stdc++.h>

using namespace std;

vector<int> del(int n) {
    vector<int> a;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 != 0) {
            a.push_back(i);
        }
    }
    return a;
}

int main() {
    for (int i = 95632; i <= 95650; i++) {
        vector<int> a = del(i);
        if (del(i).size() == 6) {
            cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " " << a[5] << "\n";
        }
    }
    return 0;
}