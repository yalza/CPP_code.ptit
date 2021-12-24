#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int m, n, p;
	cin >> m >> n >> p;
	int M[100][100], N[100][100], P[100][100];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> M[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < p; j++)cin >> N[i][j];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			P[i][j] = 0;
			for (int l = 0; l < n; l++) {
				P[i][j] += M[i][l] * N[l][j];
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++)
			cout << P[i][j]<<" ";
		cout << endl;
	}
		
}
