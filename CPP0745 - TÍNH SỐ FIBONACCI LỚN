#include<iostream>
using namespace std;
#define N 1000000007
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long int M[1001];
		M[0] = 0; M[1] = 1;
		for (int i = 2; i <= 1000; i++) {
			M[i] = M[i - 1] + M[i - 2];
			M[i] %= N;
		}
		cout << M[n]<<"\n";
	}

}
