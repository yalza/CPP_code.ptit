#include<iostream>
#include<algorithm>
#include<cstdbool>
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

int main() {
	SinhVien ds[1000];
	int n; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)cin >> ds[i];
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s; getline(cin, s);
		string a; for (int i = 0; i < s.length(); i++)a.push_back(toupper(s[i]));
		cout << "DANH SACH SINH VIEN NGANH " << a << ":" << endl;
		for (int i = 0; i < n; i++) {
			if (ds[i].a[5] == s[0]) {
				if ((s[0] == 'K' || s[0] == 'V' || s[0] == 'D'))cout << ds[i];
				else if (ds[i].c[0] != 'E')cout << ds[i];
			}
		}
	}
}
