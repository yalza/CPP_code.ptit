#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		sort(m.begin(), m.end());
		int z = n - 1;
		while (k) {
			cout << m[z]<<" ";
				k--;z--;
		}
		cout << endl;
	}
}
