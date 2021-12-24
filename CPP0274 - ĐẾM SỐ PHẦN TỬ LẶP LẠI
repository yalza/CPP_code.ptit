#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		
		int n; cin >> n;
		vector<int> M(n);
		int max = 0;
		for (int i = 0; i < n; i++) {
			cin >> M[i]; if (max < M[i])max = M[i];
		}
		vector<int> N(max+1);
		for (int i = 0; i <= max; i++) 
			N[i] = 0;
			for (int i = 0; i < n; i++)N[M[i]]++;
			int count = 0;
			for (int i = 0; i <= max; i++) {
				if (N[i] > 1)count += N[i];
			}
		
		cout << count << endl;
	}
}
