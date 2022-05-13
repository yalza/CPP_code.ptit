#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		char M[1000][1000];
		int m, n; cin >> m >> n;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> M[i][j];
			}
		}
		for (int i = 0; i < n; i++)
			if (M[0][i] == 'O')M[0][i] = '8';
		for (int i = 0; i < m; i++)
			if (M[i][n - 1] == 'O')M[i][n - 1] = '8';
		for (int i = n - 1; i >= 0; i--)
			if (M[m - 1][i] == 'O') M[m - 1][i] = '8';
		for (int i = m - 1; i >= 0; i--)
			if (M[i][0] == 'O' )M[i][0] = '8';
		
		for (int i = 1; i < m-1; i++) {
			for (int j = 1; j < n-1; j++) {
				if (M[i][j] == 'O'&&( M[i - 1][j] == '8' || M[i][j - 1] == '8' || M[i][j + 1] == '8')) {
					for (int l = j; j < n; l++)if (M[i][l] == 'O')M[i][l] = '8'; else break;
					for (int l = j - 1; l >= 0; l--)if (M[i][l] == 'O')M[i][l] = '8'; else break;
				}
			}
		}
		for (int i = 0; i < m/2; i++) {
			for (int j = 0; j < n; j++)swap(M[i][j], M[m - i - 1][j]);
		}
		for (int i = 1; i < m - 1; i++) {
			for (int j = 1; j < n - 1; j++) {
				if (M[i][j] == 'O' && (M[i - 1][j] == '8' || M[i][j - 1] == '8' || M[i][j + 1] == '8')) {
					for (int l = j; j < n; l++)if (M[i][l] == 'O')M[i][l] = '8'; else break;
					for (int l = j - 1; l >= 0; l--)if (M[i][l] == 'O')M[i][l] = '8'; else break;
				}
			}
		}
		for (int i = 0; i < m / 2; i++) {
			for (int j = 0; j < n; j++)swap(M[i][j], M[m - i - 1][j]);
		}
		for (int i = 0; i< n - 1; i++) {
			for (int j = 1; j < m - 1; j++) {
				if (M[j][i] == 'O' && (M[j + 1][i] == '8' || M[j][i + 1] == '8' || M[j - 1][i] == '8')) {
					for (int l = j; l < m; l++)if (M[l][i] == 'O')M[l][i] = '8'; else break;
					for (int l = j-1; l >=0; l--)if (M[l][i] == 'O')M[l][i] = '8'; else break;
				}
			}
		}
		for (int i = 0; i < n / 2; i++) {
			for (int j = 0; j < m; j++)swap(M[j][i], M[n - 1 - j][i]);
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = 1; j < m - 1; j++) {
				if (M[j][i] == 'O' && (M[j + 1][i] == '8' || M[j][i + 1] == '8' || M[j - 1][i] == '8')) {
					for (int l = j; l < m; l++)if (M[l][i] == 'O')M[l][i] = '8'; else break;
					for (int l = j - 1; l >= 0; l--)if (M[l][i] == 'O')M[l][i] = '8'; else break;
				}
			}
		}
		for (int i = 0; i < n / 2; i++) {
			for (int j = 0; j < m; j++)swap(M[j][i], M[n - 1 - j][i]);
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (M[i][j] == 'O')cout << 'X' << " ";
				else if (M[i][j] == '8')cout << 'O' << " ";
				else cout << 'X' << " ";
			}
			cout << endl;
		}
		

	}
}
