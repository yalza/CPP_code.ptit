#include <iostream>
#include<string>
using namespace std;
int main() {
    int z; cin >> z;
    while (z--) {
        string c;
        long long int b, a = 0, mod, tg = 1;
        cin >> c >> b >> mod;
        for (int i = 0; i < c.size(); i++) a = (a * 10 + c[i] - '0') % mod;

        while (b - 1) {
            if (b % 2)
                tg = (tg * a) % mod;
            a = (a * a) % mod;
            b /= 2;
        }
        cout << (a * tg) % mod << "\n";
    }
}
