#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long int M[100];
		M[0] = 1;
		M[1] = 1;
		for (int i = 2; i < 92; i++)
			M[i] = M[i-2] + M[i - 1];
		cout << M[n - 1] << endl;
	}
}
