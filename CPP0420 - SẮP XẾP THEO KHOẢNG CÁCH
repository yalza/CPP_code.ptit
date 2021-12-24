#include<iostream>
#include<vector>
#include<math.h>
#include<stdbool.h>
#include<algorithm>
using namespace std;
struct X {
	int a, b,c;
};
bool test(X x, X y) {
	if (x.b < y.b)return true;
	if (x.c < y.c&&x.b==y.b)return true;
	return false;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<X> m(n);
		for (int i = 0; i < n; i++) {
			cin >> m[i].a;
			m[i].b = abs(k - m[i].a);
			m[i].c = i;
		}
		sort(m.begin(), m.end(), test);
		for (int i = 0; i < n; i++)cout << m[i].a << " ";
		cout << endl;
	}
}
