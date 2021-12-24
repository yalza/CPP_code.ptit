#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n,m; cin >> n>>m;
		int M[101][101],N[101][101];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) {
				cin >> M[i][j];
				N[i][j] = M[i][j];
			}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (M[i][j] == 1) {
					for (int l = 0; l < n; l++) {
						N[l][j] = 1;
					}
					for (int l = 0; l < m; l++) {
						N[i][l] = 1;
					}
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << N[i][j] << " ";
			cout << endl;
		}
	}
}
