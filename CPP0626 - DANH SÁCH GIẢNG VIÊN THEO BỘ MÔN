#include<iostream>
#include<algorithm>
#include<sstream>
#include<cstdbool>
#include<string>
using namespace std;
class GiangVien {
private:
	string name;
public:
	string ma, ten, subject;
	GiangVien() {
		 name = subject = "";
		ma = "GV";
	}
	friend istream& operator>>(istream& mycin, GiangVien&);
	friend ostream& operator<<(ostream& mycout, GiangVien);
};
int coun = 0;
istream& operator>>(istream& mycin, GiangVien& X) {
	coun++;
	X.ma += string(2 - to_string(coun).length(), '0') + to_string(coun);
	getline(mycin, X.name);
	getline(mycin, X.subject);
	string s = "";
	stringstream ss(X.subject);
	string token;
	while (ss >> token) {
		s += toupper(token[0]);
	}
	X.subject = s;
	return mycin;
}
ostream& operator<<(ostream& mycout, GiangVien X) {
	mycout << X.ma << " " << X.name << " " << X.subject << endl;
	return mycout;
}

int main() {
	GiangVien ds[100];
	int n; cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)cin >> ds[i];
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s; getline(cin, s);
		string a = "";
		stringstream ss(s);
		string token;
		while (ss >> token) {
			a += toupper(token[0]);
		}
		s = a;
		cout << "DANH SACH GIANG VIEN BO MON " << s << ":\n";
		for (int i = 0; i < n; i++) {
			if (s == ds[i].subject)cout << ds[i];
		}
	}
	return 0;
}

