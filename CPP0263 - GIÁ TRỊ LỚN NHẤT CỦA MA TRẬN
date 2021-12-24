#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int M[501][501];
	int A[501][501], B[501][501];
	for (int i = 1; i <= n; i++)for (int j = 1; j <= n; j++) {
		cin >> M[i][j];
		A[i][j] = M[i][j]; B[i][j] = M[i][j];
	}
	
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= n; j++) {
			A[i][j] += A[i - 1][j - 1];
		}
	}
	for (int i = 2; i <= n; i++) {
		for (int j = n-1; j >0; j--) {
			B[i][j] +=B[i - 1][j + 1];
		}
	}
	for (int i = 0; i <= n; i++) {
		A[i][0] = 0;
		A[0][i] = 0;
	}
	for (int i = 1; i <= n + 1; i++) {
		B[0][i] = 0;
		B[i][n+1] = 0;
	}
	int maxxx = -10000000;
	for (int i = n ; i > 0;i--) {
		for (int j = n ; j > 0; j--) {
			int x = min(i, j);
			int h = i - x, c = j - x;
			for (int k = 0; k < min(i, j); k++) {
				maxxx = max(maxxx,A[i][j] - A[h + k][c + k] - B[i][c + k+1 ] + B[h + k][j+1]);
			}
		}
	}
	cout << maxxx;
}
