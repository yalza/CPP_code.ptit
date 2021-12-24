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
		int min = 1000;
		for (int i = 0; i < n - 1; i++) {
			if (min > m[i + 1] - m[i])
				min = m[i + 1] - m[i];
		}
		cout << min << endl;
	}
}
