#include<iostream>
#include<algorithm>
using namespace std;

class PhanSo
{
private:
    long long tu, mau;

public:
    PhanSo(long long t,long long int m)
    {
        tu = t, mau = m;
    }
   
    friend istream& operator>>(istream& is, PhanSo& obj)
    {
        is >> obj.tu;
        is >> obj.mau;
        return is;
    }
  
    friend PhanSo operator+(PhanSo p, PhanSo q) {
        PhanSo a(1,1);
        a.tu = p.tu * q.mau + q.tu * p.mau;
        a.mau = p.mau*q.mau;
        long long x = __gcd(a.tu, a.mau);
        a.tu /= x; a.mau /= x;
        return a;
    }
    friend ostream& operator<<(ostream& os, PhanSo obj)
    {
        os << obj.tu << "/" << obj.mau << endl;
        return os;
    }
   
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
