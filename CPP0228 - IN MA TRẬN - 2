#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100][100];
		int a = 1;
		for (int i = 1; i <= 4 * n; i++)
			for (int j = 1; j <= 4 * n; j++)
				M[i][j] = a++;
		int x = 4 * n;
		int N[10000];
		int gt = 0;
		for (int j = 1; j <= 4*n; j+=2) {
			for (int i = j; i <= x; i++)
				N[gt++] = M[i][j];
			for (int i = j + 1; i < x; i++) 
				N[gt++] = M[x][i];
				for (int i = x - 1; i > j; i--)
					N[gt++] = M[i][x - 1];
				for (int i = x - 2; i > j + 1; i--)
					N[gt++] = M[j + 1][i];
				x = x - 2;
		}
		int b = 4 * 4 * n * n;
		int A[10000];
		int g = 0;
		x = 4 * n;
		for (int i = 1; i <= 4 * n; i++)
			for (int j = 1; j <= 4 * n; j++)
				M[i][j] = b--;
		for (int j = 1; j <= 4 * n; j += 2) {
			for (int i = j; i <= x; i++)
				A[g++] = M[i][j];
			for (int i = j + 1; i < x; i++)
				A[g++] = M[x][i];
			for (int i = x - 1; i > j; i--)
				A[g++] = M[i][x - 1];
			for (int i = x - 2; i > j + 1; i--)
				A[g++] = M[j + 1][i];
			x = x - 2;
		}
		for (int i = gt - 1; i >= 0; i--)
			cout << A[i] << " ";
		cout << endl;
		for (int i = gt - 1; i >= 0; i--)
			cout << N[i] << " ";
		cout << endl;
	}

}
