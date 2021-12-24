#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		sort(m.begin(), m.end());
		if (m[0] == m[n - 1]) {
			cout << -1 << endl;
		}
		else {
			cout << m[0] << " ";
			for (int i = 1; i < n; i++) {
				if (m[i] > m[0]) {
					cout << m[i] << endl;
					break;
				}
			}
		}
	}
}
