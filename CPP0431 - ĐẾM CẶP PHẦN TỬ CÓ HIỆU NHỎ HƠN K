#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int M[100001];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n);
		long long int count = 0;
		for (int i = 0; i < n; i++) {
			int x = upper_bound(M+i+1, M + n, M[i]+k) - M;
			count = count + x - i - 1;
			for (int j = x-1; j > i; j--) {
				if (M[i] + k == M[j])
				count--;
				else
					break;
			}
		}
		cout << count << endl;
	}
}
