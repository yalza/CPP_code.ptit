#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<ll> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		for (int i = 0; i < n; i++) {
			if (i == 0)
				cout << (ll)m[i] * m[i + 1] << " ";
			else if (i == n - 1)
				cout << (ll)m[i] * m[i - 1] << " ";
			else cout << (ll)m[i - 1] * m[i + 1] << " ";
		}
		cout << endl;
	}
}
