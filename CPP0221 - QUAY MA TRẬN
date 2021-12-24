#include<iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[100][100];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		int a = m, b = n;
		int N[10000];
		int g = 0;
		for (int i = 0; i <= a / 2+1; i++) {
			for (int j = i; j < n; j++)N[g++] = M[i][j];
			for (int j = i + 1; j < m; j++)N[g++] = M[j][n - 1];
			for (int j = n - 2; j >= i; j--)N[g++] = M[m - 1][j];
			for (int j = m - 2; j > i; j--)N[g++] = M[j][i];
			m--; n--;
		}
		int u = 0;
		m = a, n = b;int  x = a, y = b;
		for (int i = 0; i < a / 2; i++) {
			int X[10000];
			X[0] = N[x*4-5+u];
			int s = x *y;
			for (int l = 1; l < x*4-4; l++) {
				X[l] = N[u++];
			}
			int z = 0;
			for (int j = i; j < n; j++)M[i][j] = X[z++];
			for (int j = i + 1; j < m; j++)M[j][n - 1]=X[z++];
			for (int j = n - 2; j >= i; j--)M[m - 1][j]=X[z++];
			for (int j = m - 2; j > i; j--)M[j][i]=X[z++];
			m--; n--;
			x -= 2; y -= 2;
			u++;
		}
		for (int i = 0; i < a; i++) {
			for (int j = 0; j< b; j++)
				cout << M[i][j] << " ";
		}
		cout << endl;
	}
}
