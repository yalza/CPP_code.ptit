#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int seach(vector<int> n, int x) {
	int l = 0, r = n.size() - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (n.at(m) == x)return 1;
		else if (n.at(m) < x) l = m + 1;
		else r = m - 1;
	}
	return 0;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		n--;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		sort(m.begin(), m.end());
		for (int i = 1; i < n+1; i++)
			if (seach(m, i) == 0)
				cout << i << endl;
	}
}
