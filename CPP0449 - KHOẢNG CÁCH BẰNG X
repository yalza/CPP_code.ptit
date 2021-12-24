#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n);
		int count = 0;
		for (int i = n-1; i >=0; i--) {
			int x = lower_bound(M, M + n, M[i] - k) - M;
			if (M[x] + k == M[i]) {
				count = 1;
				break;
			}
		}
		if (count)cout << 1 << endl;
		else cout << -1 << endl;
	}
}
