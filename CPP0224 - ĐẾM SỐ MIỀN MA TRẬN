#include<iostream>
#include<cstdbool>
#include<cstring>
using namespace std;
bool N[105][105] = { false };
int M[105][105];
int X[] = { -1,-1,-1,0,0,1,1,1 };
int Y[] = { -1,0,1,-1,1,-1,0,1 };
void DFS(int i, int j, int m, int n) {
	N[i][j] = true;
	for (int k = 0; k < 8; k++) {
		int x = i + X[k], y = j + Y[k];
		if (x >= 0 && y >= 0 && x < m && y < n && M[x][y] == 1 && !N[x][y])
			DFS(x, y, m, n);
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		memset(N, false, sizeof(N));
		int count = 0;
		for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin >> M[i][j];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (M[i][j] == 1 && !N[i][j]) {
					count++;
					DFS(i, j, m, n);
				}
			}
		}
		cout << count << endl;
	}
}
