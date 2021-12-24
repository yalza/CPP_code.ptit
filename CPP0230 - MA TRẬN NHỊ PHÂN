#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	
		int n; cin >> n;
		int M[1000][100];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> M[i][j];
			}
		}
		int count = 0;
		for (int i = 0; i < n; i++) {
			int a = 0, b = 0;
			for (int j = 0; j < 3; j++) {
				
				if (M[i][j] == 1)
					a++;
				else b++;
			}
			if (a > b)
				count++;
		}
		cout << count << endl;
	
}
