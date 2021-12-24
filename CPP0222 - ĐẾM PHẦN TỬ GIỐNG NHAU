#include<iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000][1000];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		int N[100000] = { 0 };
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				int s = 0;
				for (int l = 0; l < j; l++)
					if (M[i][j] == M[i][l])
						s++;
				if (s > 0)continue;
				N[M[i][j]]++;
			}
		}
		int count = 0;
		for (int i = 0; i < 100000; i++)
			if (N[i] == n)
				count++;
		cout << count << endl;
	}
}
