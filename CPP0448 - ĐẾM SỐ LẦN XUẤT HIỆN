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
		int count = 0;
		for (int i = 0; i < n; i++)
			if (m[i] == k)
				count++;
		if (!count)cout << -1 << endl;
		else
			cout << count << endl;
	}
}
