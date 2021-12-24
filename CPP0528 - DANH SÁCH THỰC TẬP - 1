#include<iostream>
#include<string>
#include<algorithm>
#include<stdbool.h>
using namespace std;
struct tt {
	string a, b, c, d, e;
	int ma;
};
bool cmp(tt A,tt B) {
	if (A.b < B.b)return true;
	return false;
}
int main() {
	tt M[100];
	int n; cin >> n;
	getchar();
	for (int i = 0; i < n; i++) {
		M[i].ma = i + 1;
		getline(cin, M[i].a);
		getline(cin, M[i].b);
		getline(cin, M[i].c);
		getline(cin, M[i].d);
		getline(cin, M[i].e);
	}
	sort(M, M + n, cmp);
	int q; cin >> q;
	string s[5];
	for (int i = 0; i < q; i++)cin >> s[i];
	for (int j = 0; j < q; j++) {
		for (int i = 0; i < n; i++) {
			if (M[i].e == s[j]) {
				cout << M[i].ma <<" "<<M[i].a << " " << M[i].b << " " << M[i].c << " " << M[i].d << " " << M[i].e << endl;
			}
		}
	}
}
