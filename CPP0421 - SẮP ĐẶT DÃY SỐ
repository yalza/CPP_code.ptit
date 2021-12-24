#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int seach(vector<long long int> n, int x) {
	int l = 0, r = n.size() - 1;
	while (l <= r) {
		int m=(l + r) / 2;
		if (n.at(m) == x)return x;
		else if (n.at(m) < x) l = m + 1;
		else r = m - 1;
	}
	return -1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<long long int> m(n);
		for (int i = 0; i < n; i++)cin>>m[i];
		sort(m.begin(), m.end());
		for (int i = 0; i < n; i++)
			cout << seach(m, i) << " ";
		cout << endl;
	}
}
