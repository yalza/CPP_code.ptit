#include <iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
struct PhanSo {
    ll t, m;
};
void nhap(PhanSo& a) {
    cin >> a.t >> a.m;
}
void rutgon(PhanSo& a) {
    ll x = __gcd(a.t, a.m);
    a.t /= x; a.m /= x;
}
void in(PhanSo a) {
    cout << a.t << "/" << a.m;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

v
