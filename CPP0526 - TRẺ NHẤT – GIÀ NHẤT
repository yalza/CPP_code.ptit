#include<iostream>
#include<algorithm>
#include<stdbool.h>
using namespace std;
struct old {
	string a, b;
	int n;
	int t;
	int nam;
};
bool cmp(old A, old B) {
	if (A.nam > B.nam)return true;
	if (A.nam == B.nam && A.t > B.t)return true;
	if (A.nam == B.nam && A.t == B.t && A.n > B.n)return true;
	return false;
}
int main() {
	int n; cin >> n;
	old M[100];
	for (int i = 0; i < n; i++) {
		cin >> M[i].a >> M[i].b;
		 M[i].n = (M[i].b[0] - '0') * 10 + M[i].b[1] - '0';
		 M[i].t = (M[i].b[3] - '0') * 10 + M[i].b[4] - '0';
		 M[i].nam = (M[i].b[6] - '0') * 1000 + (M[i].b[7] - '0') * 100 + (M[i].b[8] - '0') * 10 + (M[i].b[9] - '0');
	}
	sort(M, M + n, cmp);
	cout << M[0].a << endl;
	cout << M[n - 1].a << endl;
}
