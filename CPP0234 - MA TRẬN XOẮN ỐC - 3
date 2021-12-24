#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n, k; cin >> m >> n >> k;
		int M[100][100];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		}
		int g = 0;
		int N[1000];
		int a = m, b = n;
		for (int i = 0; i <= a / 2; i++) {
			for (int j = i; j < n; j++)N[g++] = M[i][j];
			for (int j = i + 1; j < m; j++)N[g++] = M[j][n - 1];
			for (int j = n - 2; j >= i; j--)N[g++] = M[m - 1][j];
			for (int j = m - 2; j > i; j--)N[g++] = M[j][i];
			m--; n--;
		}
		cout << N[k - 1] << endl;
	}
}
