#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    vector<int> a(26);
    int mx = 0;
    string s;
    cin >> s;
    string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int j = 0; j < (int) s.size() - 2; j++) {
        if (s[j] == s[j + 2]) {
            a[s[j + 1] - 'A']++;
        }
    }
    for (int i = 0; i < (int) a.size(); i++) {
        if (a[i] > a[mx]) {
            mx = i;
        }
    }
    cout << mx;
    return 0;
}
