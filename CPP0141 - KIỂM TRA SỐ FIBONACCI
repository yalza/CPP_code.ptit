#include<iostream>
using namespace std;
int test(long long int M[], long long int n) {
	for (int i = 0; i < 100; i++)
		if (M[i] == n)
			return 1;
	return 0;
}
int main() {
	int t; cin >> t;
	while (t--) {
		long long int n; cin >> n;
		long long int M[100];
		M[0] = 0;
		M[1] = 1;
		for (int i = 2; i < 100; i++)
			M[i] = M[i - 2] + M[i - 1];
		if (test(M, n))
			cout << "YES\n";
		else cout << "NO\n";
	}
}
