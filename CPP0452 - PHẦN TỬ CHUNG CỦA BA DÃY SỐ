#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define N 1000000
int test(ll*A,ll*B,ll*D, int m, int n) {
	int count = 0, j = 0;
	for (int i = 0; i < m; i++) {
		while (A[i] < B[j] && i < m - 1)i++;
		while (A[i] > B[j] && j < n - 1)j++;
		if (A[i] == B[j]) {
			j++;
			D[count++] = A[i];
		}
		if (j >= n)break;
	}
	return count;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n, p;
		cin >> m >> n >> p;
		ll A[1000000], B[1000000], C[1000000], D[1000000], E[1000000];
		for (int i = 0; i < m; i++)cin >> A[i];
		for (int i = 0; i < n; i++)cin >> B[i];
		for (int i = 0; i < p; i++)cin >> C[i];
		int a = test(A, B, D, m, n);
		int b = test(D, C, E, a, p);
		if (!b)cout << -1;
		else {
			for (int i = 0; i < b; i++)cout << E[i] <<" ";
		}
		cout << endl;
	}
}
