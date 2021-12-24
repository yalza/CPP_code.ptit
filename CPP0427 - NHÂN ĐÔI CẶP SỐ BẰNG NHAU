#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<long long int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		for (int i = 0; i < n - 1; i++) {
			if (m[i] != 0 && m[i + 1] == m[i]) {
				m[i] *= 2; m[i + 1] = 0;
			}
		}
		int a = 0;
		for (int i = 0; i < n; i++) {
			if (m[i] != 0) {
				cout << m[i] << " "; a++;
			}
		}
		for (int i = a; i < n; i++)cout << 0 << " ";
		cout << endl;
	}
}
