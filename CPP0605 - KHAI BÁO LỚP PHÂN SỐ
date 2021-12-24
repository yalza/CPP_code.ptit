#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
class PhanSo {
private:
	long long int tu, mau;
public:
	PhanSo(long long int t = 1, long long int m = 1)
	{
		tu = t, mau = m;
	}
	PhanSo(const PhanSo& p) {
		tu = p.tu;
		mau = p.mau;
	}
	friend void operator>>(istream& mycin, PhanSo& p)
	{
		mycin >> p.tu >> p.mau;
	}
	void rutgon() {
		long long int t = __gcd(tu, mau);
		tu = tu / t; mau = mau / t;
	}
	friend void operator<<(ostream& mycout, PhanSo& p) {
		mycout << p.tu << "/" << p.mau;
	}
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
