#include<iostream>
using namespace std;
void test(int mat[100][100], int m,int n)
{
    int i = 0, j = 0;
    bool x = true;

    for (int k = 0; k < m * n;) {
        if (x) {
            for (; i >= 0 && j < n; j++, i--) {
                cout << mat[i][j] << " ";
                k++;
            }

            if (i < 0 && j <= n - 1)
                i = 0;
            if (j == n)
                i = i + 2, j--;
        }
        else {
            for (; j >= 0 && i < m; i++, j--) {
                cout << mat[i][j] << " ";
                k++;
            }
            if (j < 0 && i <= m - 1)
                j = 0;
            if (i == m)
                j = j + 2, i--;
        }
        x = !x;
    }
}
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[100][100];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		}
        test(M, m, n);
            cout << endl;
	}
}
