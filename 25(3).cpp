#include <bits/stdc++.h>

using namespace std;

vector<int> del(int n) {
    vector<int> a;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && i % 2 == 0) {
            a.push_back(i);
        }
    }
    return a;
}

int main() {
    for (int i = 110203; i <= 110245; i++) {
        vector<int> a = del(i);
        if (del(i).size() == 4) {
            cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << "\n";
        }
    }
    return 0;
}