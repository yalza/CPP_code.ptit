#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[101][101];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
					cout << M[i][j] << " ";
				else
					cout << "  ";
			}
			cout << endl;
		}
	}
}
