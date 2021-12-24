#include<iostream> 
#include<vector>
using namespace std;
int test(vector<int> M, vector<int> N, int m, int n) {
	int x = 0, max = 0;
	for (int i = 0; i < m; i++) {
		x += M[i]; int y = 0;
		for (int j = i + 1; j < n; j++)
			y += N[j];
		if (x + y > max)max = x + y;
	}
	return max;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		vector<int> M(m), N(n);
		for (int i = 0; i < m; i++)cin >> M[i];
		for (int i = 0; i < n; i++)cin >> N[i];
		cout << max(test(M, N, m, n), test(N, M, n, m))<<endl;
	}
}
