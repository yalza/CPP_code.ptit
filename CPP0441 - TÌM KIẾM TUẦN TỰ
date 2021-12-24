#include<iostream>
#include<vector>
using namespace std;
int test(vector<int> m, int n,int k) {
	for (int i = 0; i < n; i++) 
		if (m[i] == k) 
			return i + 1;
	return -1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		cout << test(m, n, k) << endl;
	}
}
