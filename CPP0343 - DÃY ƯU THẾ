#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int a[1000];
        int tval, n = 0;
        char c;
        while (scanf("%d%c", &tval, &c) == 2) {
            a[n] = tval;
            ++n;
            if (c == '\n') {
                break;
            }
        }
        int d = 0, b = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 0)d++;
            else b++;
        }
        if ((d + b) % 2 == 0 && d > b || (d + b) % 2 == 1 && d < b)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
