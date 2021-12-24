#include<iostream>
#include<string>
#include<algorithm>
#include<stdbool.h>
using namespace std;
struct tim {
	int a, b, c;
};
bool cmp(tim A, tim B) {
	if (A.a < B.a)return true;
	if (A.b < B.b&&A.a==B.a)return true;
	if (A.c < B.c&&A.b==B.b&&A.a==B.a)return true;
	return false;
}
int main() {
	 tim M[10000];
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> M[i].a >> M[i].b >> M[i].c;
	}
	sort(M, M + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << M[i].a << " " << M[i].b << " " << M[i].c<<endl;
	}
	return 0;
}
