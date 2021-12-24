#include<iostream>
#include<cstdbool>
using namespace std;
int dc(int M[][21], int m, int n, int k)
{
	if (m < 0 || n < 0) return 0;
	if (m == 0 && n == 0) return (k == M[m][n]);

	return dc(M, m - 1, n, k - M[m][n]) + dc(M, m, n - 1, k - M[m][n]);
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int M[21][21];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		cout << dc(M, n-1, n-1, k) << endl;
	}
}
