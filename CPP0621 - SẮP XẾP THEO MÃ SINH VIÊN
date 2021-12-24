#include<iostream>
#include<algorithm>
#include<cstdbool>
#include<vector>
#include<string>
using namespace std;
class SinhVien {
private:
	string  b, d;
public:
	string c, a;
	SinhVien() {
		a = b = c = d = "";
	}
	friend istream& operator>>(istream& mycin, SinhVien&);
	friend ostream& operator<<(ostream& mycout, SinhVien);
};
;istream& operator>>(istream& mycin, SinhVien& x) {
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
	if (X.a < Y.a)return true;
	return false;
}
int main() {
	vector<SinhVien> ds;
	SinhVien tmp;
	while (cin >> tmp) {
		ds.push_back(tmp);
	}
	sort(ds.begin(), ds.end(), cmp);
	for (int i = 0; i < ds.size(); i++)cout << ds[i];
}
