#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    string s;
    vector<int> a;
    cin >> s;
    string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int mx = 0, c = 0;
    for (int i = 0; i < (int) s1.size(); i++) {
        for (int j = 0; j < s.size() - 1; j++) {
            if (s[j] == 'E') {
                if(s[j + 1] == s1[i]) {
                    c++;
                }
            }
        }
        a.push_back(c);
        c = 0;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > a[mx]) {
            mx = i;
        }
    }
    cout << mx;
}
