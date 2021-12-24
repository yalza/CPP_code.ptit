#include<iostream>
#include<vector>
using namespace std;
int fibo(int n) {
	if (n == 1 || n == 2)return 1;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n);
		for (int i = 0; i < n; i++)cin >> M[i];
		vector<int> N(20);
		N[1] = 0;
		for (int i = 2; i < 17; i++)
			N[i] = fibo(i);
		for (int i = 0; i < n; i++) {
			for (int j = 1; j < 17; j++)
				if (M[i] == N[j])
					cout << M[i]<<" ";
		}
		cout << endl;
	}
}
