#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct PhanSo {
	long long int tu, mau;
};

void process(PhanSo A, PhanSo B) {
	long long int a = A.tu, b = B.tu, c = A.mau, d = B.mau;
	long long int bc = A.mau * B.mau / __gcd(A.mau, B.mau);
	A.tu = A.tu * bc / A.mau;
	B.tu = B.tu * bc / B.mau;
	PhanSo C;
	long long int x = (A.tu + B.tu);
	long long int y = bc;
	cout << x * x / __gcd(x * x, y * y) << "/" << y * y / __gcd(x * x, y * y) << " ";
	C.tu = a * b * x * x;
	C.mau = c * d * y * y;
	cout << C.tu / __gcd(C.tu, C.mau) << "/" << C.mau / __gcd(C.tu, C.mau) << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
