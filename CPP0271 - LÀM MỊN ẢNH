#include<iostream>
using namespace std;
void printSumTricky(int mat[][500], int k,int m,int n)
{
    int stripSum[500][500];
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += mat[i][j];
        stripSum[0][j] = sum;
        for (int i = 1; i < m - k + 1; i++)
        {
            sum += (mat[i + k - 1][j] - mat[i - 1][j]);
            stripSum[i][j] = sum;
        }
    }
    for (int i = 0; i < m - k + 1; i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
            sum += stripSum[i][j];
        cout << sum/(k*k) << "  ";
        for (int j = 1; j < n - k + 1; j++)
        {
            sum += (stripSum[i][j + k - 1] - stripSum[i][j - 1]);
            cout << sum/(k*k) << "  ";
        }

        cout << endl;
    }
}
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n, k;
		cin >> m >> n >> k;
		int M[500][500], N[500][500], X[500][500] = { 0 };
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		}
        printSumTricky(M, k, m, n);
	}
}
