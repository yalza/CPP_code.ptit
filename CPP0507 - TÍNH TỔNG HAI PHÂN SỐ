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
PhanSo tong(PhanSo& a, PhanSo& b) {
    ll gcda = __gcd(a.t, a.m);
    a.t /= gcda; a.m /= gcda;
    ll gcdb = __gcd(b.t, b.m);
    b.t /= gcdb; b.m /= gcdb;
    ll bc = a.m * b.m / __gcd(a.m, b.m);
    PhanSo t;
    t.t = a.t * (bc / a.m) + b.t * (bc / b.m);
    t.m = bc;
    ll x = __gcd(t.t, t.m);
    t.t /= x; t.m /= x;
    return t;
}
void in(PhanSo a) {
    cout << a.t << "/" << a.m;
}


int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

