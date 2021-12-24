#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int test(vector<int> m, int n, int k) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int a = (l + r) / 2;
		if (m[a] == k)return 1;
		else if (k > m[a])l = a + 1;
		else r = a - 1;
	}
	return -1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		sort(m.begin(), m.end());
		int count = 0;
		for (int i = m[0] + 1; i < m[n - 1]; i++)
			if (test(m, n, i) == -1)
				count++;
		cout << count << endl;
	}
}
