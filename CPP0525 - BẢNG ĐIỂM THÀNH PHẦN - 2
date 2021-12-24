#include<iostream>
#include<string>
#include<iomanip>
#include<stdbool.h>
#include<algorithm>
using namespace std;

struct sv {
	string msv, name, ml;
	float a, b, c;
};
bool cmp(sv A, sv B) {
	if (A.name < B.name)return true;
	return false;
}
void nhap(sv& A) {
	getline(cin, A.msv);
	getline(cin, A.name);
	getline(cin, A.ml);
	cin >> A.a >> A.b >> A.c;
	getchar();
}
void xuat(sv A) {
	cout << A.msv << " " << A.name << " " << A.ml << " " << fixed << setprecision(1) << A.a << " " << A.b << " " << A.c;
}
int main() {
	sv M[100];
	int n; cin >> n;
	getchar();
	for (int i = 0; i < n; i++)nhap(M[i]);
	sort(M, M + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " ";
		xuat(M[i]);
		cout << endl;
	}
}
