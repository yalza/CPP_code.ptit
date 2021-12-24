#include<iostream>
#include<algorithm>
#include<sstream>
#include<cstdbool>
#include<sstream>
#include<string>
using namespace std;
class GiangVien {
private:
	string name;
public:
	string ma, ten, subject;
	string r;
	GiangVien() {
		name = subject = "";
		ma = "GV";
		r = "";
	}
	friend istream& operator>>(istream& mycin, GiangVien&);
	friend ostream& operator<<(ostream& mycout, GiangVien);
};
int coun = 0;
istream& operator>>(istream& mycin, GiangVien& X) {
	coun++;
	X.ma += string(2 - to_string(coun).length(), '0') + to_string(coun);
	getline(mycin, X.name);
	for (int i = 0; i < X.name.length(); i++)X.r.push_back(toupper(X.name[i]));
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
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
		for (int i = 0; i < s.length(); i++)s[i] = toupper(s[i]);
		
		
		for (int i = 0; i < n; i++)
		{
			int a = 0, b = 0;
			string token;
			stringstream ss(s);
			while (ss >> token) {
				a++;
				if (ds[i].r.find(token) != -1)b++;
			}
			if (a == b)cout << ds[i];
		}
	}
	return 0;
}
