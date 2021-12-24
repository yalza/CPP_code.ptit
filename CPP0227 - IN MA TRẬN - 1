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
			if(i%2==0)
			for (int j = 0; j < n; j++) {
				cout << M[i][j] << " ";
			}
			else
				for (int j = n-1; j>=0; j--) {
					cout << M[i][j] << " ";
				}
		}
		cout << endl;
	}
}
