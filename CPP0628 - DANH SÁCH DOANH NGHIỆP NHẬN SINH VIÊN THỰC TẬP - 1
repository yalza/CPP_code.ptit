#include<iostream>
#include<string>
#include<algorithm>
#include<cstdbool>
using namespace std;
class ThucTap {
private:
	string  ten;
public:
	string ma;
	int sl;
	ThucTap() {
		ma = ten = "";
		sl = 0;
	}
	friend istream& operator>>(istream& mycin, ThucTap&);
	friend ostream& operator<<(ostream& mycout, ThucTap);
};
istream& operator>>(istream& mycin, ThucTap&X) {
	cin.ignore();
	getline(mycin, X.ma);
	getline(mycin, X.ten);
	cin >> X.sl;
	return mycin;
}
ostream& operator<<(ostream& mycout, ThucTap X) {
	cout << X.ma << " " << X.ten << " " << X.sl << endl;
	return mycout;
}
bool cmp(ThucTap A, ThucTap B) {
	if (A.sl > B.sl)return true;
	if (A.sl == B.sl && A.ma < B.ma)return true;
	return false;
}
void sapxep(ThucTap* ds, int n) {
	sort(ds, ds + n, cmp);
}
int main() {
	ThucTap ds[100];
	int n; cin >> n;
	for (int i = 0; i < n; i++)cin >> ds[i];
	sapxep(ds, n);
	for (int i = 0; i < n; i++)cout << ds[i];
}
