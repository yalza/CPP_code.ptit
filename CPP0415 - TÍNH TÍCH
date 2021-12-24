#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		vector<long long int> m(a), n(b);
		for (int i = 0; i < a; i++)cin >> m[i];
		for (int i = 0; i < b; i++)cin >> n[i];
		sort(m.begin(), m.end());
		sort(n.begin(), n.end());
		long long int x = n[0]*m[a-1];
		cout << x << endl;
	}
}
