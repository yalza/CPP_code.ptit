#include<iostream>
#include<vector>
#include<algorithm>
#include<stdbool.h>
using namespace std;
struct X {
	int a, b;
};
bool cmp(X x, X y) {
	if (x.b > y.b)return true;
	if (x.a < y.a&&x.b==y.b)return true;
	return false;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<X> M(n);
		int max = 0;
		for (int i = 0; i < n; i++) {
			cin >> M[i].a; M[i].b = 0;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (M[j].a == M[i].a)
					M[i].b++;
			}
		}
		sort(M.begin(), M.end(), cmp);
		for (int i = 0; i < n; i++)cout << M[i].a << " ";
		cout << endl;

	}
}
