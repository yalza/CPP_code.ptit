#include<iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[500][500];
		for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin >> M[i][j];
		for (int i = 1; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (M[i][j] == 1)M[i][j] += M[i - 1][j];
			}
		}
		int maxx = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				int min = M[i][j];
				for (int l = j; l >= 0; l--) {
					if (M[i][l] != 0) {
						if (min > M[i][l])min = M[i][l];
						maxx = max(maxx, min * (j - l + 1));
					}
					else break;
				}
			}
			
		}
		cout << maxx << endl;
	}
}
