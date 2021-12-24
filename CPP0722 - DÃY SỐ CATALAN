#include <bits/stdc++.h>
using namespace std;
typedef string bint;
bint operator*(bint a, int b) {
    if (a == "0" || b == 0)
        return "0";
    int n = a.length();
    bint c(n, '0');
    int nho = 0;
    for (int i = n - 1; i >= 0; i--) {
        nho += (a[i] - '0') * b;
        c[i] = nho % 10 + '0';
        nho /= 10;
    }
    if (nho > 0)
        c = to_string(nho) + c;
    return c;
}
bint CATALAN(int n) {
    vector<int> tu;
    for (int i = n + 2; i <= 2 * n; i++) tu.push_back(i);
    for (int i = 2; i <= n; i++) {
        int x = i;
        for (int j = 0; j < tu.size() && x > 1; j++) {
            int d = __gcd(tu[j], x);
            x /= d;
            tu[j] /= d;
        }
    }
    bint res = "1";
    for (int i = 0; i < tu.size(); i++) res = res * tu[i];
    return res;
}
int main() {
//	int t; cin >> t;
//	while(t--){
	    short int n; cin >> n;
	    cout << CATALAN(n + 1) << endl;
//	}
}
