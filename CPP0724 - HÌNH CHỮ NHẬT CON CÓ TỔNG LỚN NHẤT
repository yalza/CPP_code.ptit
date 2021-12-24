#include<iostream>
#include<vector>
using namespace std; int main() {
	int t; cin >> t; while (t--) {
		int n, m; cin >> n >> m;
		int a[1000][1000]; for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j]; } }
		int res = -10000000;
		for (int i = 0; i < m; i++) {
			int sum[1000] = { 0 };
			for (int j = i; j < m; j++) {
				int s = 0;
				for (int k = 0; k < n; k++) {
					sum[k] += a[k][j];
					s = max(sum[k], sum[k] + s);
					res = max(res, s);
				}
			}
		} cout << res << endl;
	}
}
