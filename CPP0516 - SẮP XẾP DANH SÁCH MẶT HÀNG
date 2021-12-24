#include<iostream>
#include<string>
#include<algorithm>
#include<stdbool.h>
#include<iomanip>
using namespace std;

struct ds {
	int ma;
	string a, b;
	float c, d;
};
bool cmp(ds a, ds b) {
	if (a.d - a.c > b.d - b.c)return true;
	return false;
}
int main() {
	int n; cin >> n;
	getchar();
	ds M[100];
	for (int i = 0; i < n; i++) {
		getline(cin, M[i].a);
		getline(cin, M[i].b);
		cin >> M[i].c >> M[i].d;
		getchar();
		M[i].ma = i + 1;
	}
	sort(M, M + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << M[i].ma << " " << M[i].a << " " << M[i].b <<" " << fixed << setprecision(2) << M[i].d - M[i].c << endl;
	}
}
