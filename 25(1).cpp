#include <bits/stdc++.h>

using namespace std;

vector<int> del(int n) {
    vector<int> a;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            a.push_back(i);
        }
    }
    return a;
}
int main() {
    for (int i = 185311; i <= 185330; i++) {
        vector<int> b = del(i);
        if (b.size() == 4) {
            cout << b[0] << " " << b[1] << " " << b[2] << " " << b[3] << "\n";
        }
    }
}