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
    int mx = 0;
    int m = 0;
    for (int i = 120115; i <= 120200; i++) {
        int c = del(i).size();
        if (c > mx) {
            mx = c;
            m = i;
        }
    }
    cout << mx << " " << m;
}