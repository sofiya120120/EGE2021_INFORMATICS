#include <iostream>

using namespace std;

int f(int n) {
    if (n == 1) return 0;
    if (n % 2 == 0) {
        return min(f(n - 1) + 1, f(n / 2) + 1);
    } else {
        return f(n - 1) + 1;
    }
}

int main() {
    for (int i = 1; i < 100; i++) {
        if (f(i) > 5) {
            cout << i;
            break;
        }
    }
    return 0;
}
