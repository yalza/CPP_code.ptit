#include <iostream>
#include<vector>
using namespace std;
int gcd(int a, int b) {
    if (a > b)return gcd(b, a);
    for (int i = a; i >= 1; i--)
        if (a % i == 0 && b % i == 0)
            return i;
}
#define modu 1000000007
int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> m(n);
        for (int i = 0; i < n; i++)cin >> m[i];
        int x = m[0];
        for (int i = 0; i < n; i++)
            x = gcd(x, m[i]);
        long long int sum = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < x; j++) {
                sum = sum * m[i];
                if (sum > modu)sum %= modu;
            }
        }
        cout << sum << endl;
    }
}
