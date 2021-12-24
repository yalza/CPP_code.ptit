#include<iostream>
#include<string>
using namespace std;

int main() {
	int m, n; cin >> m >> n;
	string a="", b="";
	a.resize(m), b.resize(m);
	if (n > 9 * m || n == 0) {
		cout << -1 << " " << -1;
	}
	else {
		for (int i = 0; i < m; i++)
		{
			b[i] = '0';
			if (i == 0)
				a[i] = '1';
			else a[i] = '0';
		}
		int k = n;
		for (int i = 0; i < b.length(); i++) {
			if (k >= 9)
				b[i] = 9 + 48;
			else {
				b[i] = k + b[i];
				break;
			}
			k -= 9;
		}
		int z = n - 1;
		for (int i = m - 1; i >= 0; i--) {
			if (z >= 9)
				a[i] = 9 + 48;
			else {
				a[i] = z + a[i];
				break;
			}
			z -= 9;
		}
		cout << a << " " << b;
	}
}
