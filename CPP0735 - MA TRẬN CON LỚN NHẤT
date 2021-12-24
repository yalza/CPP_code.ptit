#include<iostream>
#include<vector>
using namespace std; int main() {
	int t; cin >> t; while (t--) {
		int m, n; cin >> m >> n;
		int M[500][500], N[500][500];;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++) 
				cin >> M[i][j];
		for (int i = 0; i < n; i++)N[0][i] = M[0][i];
		for (int i = 0; i < m; i++)N[i][0] = M[i][0];
		int max = 0;
		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				if (M[i][j] == 1) {
					N[i][j] = min(N[i][j - 1], min(N[i - 1][j],N[i - 1][j - 1])) + 1;
					if (max < N[i][j])max = N[i][j];
				}
				else N[i][j] = 0;
			}
		}
	
		cout << max << endl;
	}
}
