#include<iostream>
#include<stdbool.h>
using namespace std;

void swapmatrix(int M[100][100], int a, int b, int rank) {
	for (int i = 0; i < rank; i++)
		swap(M[a][i], M[b][i]);
}
int test(int M[100][100], int m, int n) {
	int rank = n;
	for (int i = 0; i < rank; i++) {
		if (M[i][i]) {
			for (int j = 0; j < m; j++)
			{
				if (i != j) {
					double x = M[j][i] * 1.0 / M[i][i];
					for (int l = 0; l < rank; l++) {
						M[j][l] -= x * M[i][l];
					}
				}
			}

		}
		else {
			bool ok = true;
			for (int j = i + 1; j < m; j++) {
				if (M[j][i]) {
					swapmatrix(M, j, i, rank);
					ok = false;
					break;
				}
			}
			if (ok) {
				rank--;
				for (int j = 0; j < m; j++) {
					M[j][i] = M[j][rank];
				}
			}
			i--;
		}


	}
	return rank;
}



int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[100][100];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> M[i][j];
			}
		}
		cout << test(M, m, n) << endl;
	}
}
