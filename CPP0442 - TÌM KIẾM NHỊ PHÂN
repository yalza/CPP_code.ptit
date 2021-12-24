#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int test(vector<int> m, int n, int k) {
	int l = 0,r = n - 1;
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
		int n, k; cin >> n >> k;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		sort(m.begin(), m.end());
		cout << test(m, n, k) << endl;
	}
}
