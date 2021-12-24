#include<iostream>
#include<vector>
using namespace std;
int test(vector<int> m, int n, int sum) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += m[i];
		if (s == sum - s + m[i])
			return i + 1;
	}
	return -1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> m(n);
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> m[i]; sum += m[i];
		}
		cout << test(m, n, sum) << endl;
	}
}
