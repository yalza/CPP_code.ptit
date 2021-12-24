#include<iostream>
#include<algorithm>
#include<cstdbool>
#include<string>
using namespace std;
class SinhVien {
private:
	
	string  b, d;
public:
	string c,a;
	SinhVien() {
		a = b = c = d = "";
	}
	friend istream& operator>>(istream& mycin, SinhVien&);
	friend ostream& operator<<(ostream& mycout, SinhVien);
};
int t = 0;
istream& operator>>(istream& mycin, SinhVien& x) {
	getline(mycin, x.a);
	getline(mycin, x.b);
	getline(mycin, x.c);
	getline(mycin, x.d);
	return mycin;
}
ostream& operator<<(ostream& mycout, SinhVien x) {
	mycout << x.a << " " << x.b << " " << x.c << " " << x.d << endl;
	return mycout;
}
bool cmp(SinhVien X, SinhVien Y) {
	if (X.c < Y.c)return true;
	if (X.c == Y.c && X.a < Y.a)return true;
	return false;
}
void sapxep(SinhVien* ds, int n) {
	sort(ds, ds + n, cmp);
}
int main() {
	SinhVien ds[1000];
	int n; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)cin >> ds[i];
	sapxep(ds, n);
	for (int i = 0; i < n; i++)cout << ds[i];
}
