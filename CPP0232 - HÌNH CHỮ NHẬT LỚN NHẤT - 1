#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[100][100];
		for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin >> M[i][j];
		int N[100][100] = { 0 };
		for (int j = 0; j < n; j++) {
			N[0][j] = M[0][j];
			for (int i = 1; i < m; i++)
				if (M[i][j] == 0)N[i][j] = 0;
				else N[i][j] = N[i - 1][j] + 1;
		}
		for (int i = 0; i < m; i++) sort(N[i], N[i] + n);
		int res = 0;
		for (int i = 0; i < m; i++)
			for (int j = n - 1; j >= 0; j--)
				res = max(res, N[i][j] * (n - j));
		cout << res << endl;
	}
}
