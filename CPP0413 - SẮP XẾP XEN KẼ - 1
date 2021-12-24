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
		for (int i = 0; i <= n / 2; i++) {
			cout << m[n - i - 1] << " ";
			if (n%2==1&&n - i - 1 != i||n%2==0&&i<n/2-1)
				cout << m[i] << " ";
		}
		cout << endl;
	}
}
