#include<iostream>
#include<vector>
using namespace std;

int main() {
	
		int n; cin >> n;
		vector<int> M(n);
		for (int i = 0; i < n; i++)
			cin >> M[i];

		vector<int> N(10000);
		for (int i = 0; i <1000; i++)
			N[i] = 0;
		for (int i = 0; i < n; i++)N[M[i]]++;
		for (int i = 0; i <= 1000; i++) {
			if (N[i] >= 1)cout << i << " ";
		}
		cout << endl;
	
}
