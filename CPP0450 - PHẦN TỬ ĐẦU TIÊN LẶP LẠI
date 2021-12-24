#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> m(n);
		int max = 0;
		for (int i = 0; i < n; i++) {
			cin >> m[i];
			if (m[i] > max)max = m[i];
		}
		vector<int> x(max+2);
		for (int i = 0; i <= max; i++)x[i] = 0;
		for (int i = 0; i < n; i++)
			x[m[i]]++;
		int a = 0;
		for (int i = 0; i < n; i++) {
			if (x[m[i]] > 1) {
				for (int j = 0; j < i; j++) {
					if (m[i] == m[j]) {
						a = 1;
						cout << m[i] << endl;
						break;
					}
				}
			}
			if (a == 1)
				break;
		}
		if (a == 0)
			cout << -1 << endl;
	}
}
