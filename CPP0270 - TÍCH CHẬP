#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[300][300];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		int N[3][3], X[300][300] = { 0 };
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				cin >> N[i][j];
				long long int sum = 0;
		for (int i = 0; i <= m - 3;i++) {
			for (int j = 0; j <= n - 3; j++) {
				for (int l = 0; l < 3; l++) {
					for (int k = 0; k < 3; k++) {
						sum += N[l][k] * M[i + l][k + j];
					}
				}
			
			}
		}
		cout << sum << endl;
	}
}
