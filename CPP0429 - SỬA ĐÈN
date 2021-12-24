#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a, b, n; cin >> a >> b >> n;
	int M[100000];
	for (int i = 1; i <= n; i++)cin >> M[i];
	M[0] = 0, M[n + 1] = a + 1;
	sort(M, M + n+2);
	int max = 10000000;
	for (int i = 0; i < n+1; i++) {
		int x =lower_bound(M, M + n+2, M[i] + b) - M;
		if (x >= n + 2)continue;
		if (M[i] + b == M[x]) {
			if (x - i < max)max = x - i;
		}
		else
		if (x - i - 1 < max)max = x - i - 1;
	}
	cout << max << endl;
}
