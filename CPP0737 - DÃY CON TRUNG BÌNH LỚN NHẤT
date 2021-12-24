#include<iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		long int M[1000];
		for (int i = 0; i < n; i++)cin >> M[i];
		long max = -100000000; int x = 0;
		for (int i = 0; i < n - k + 1; i++) {
			long int sum = 0;
			for (int j = i; j < i + k; j++) {
				sum += M[j];
			}
			if (sum > max) {
				max = sum; x = i;
			}
		}
		for (int i = x; i < x + k; i++)cout << M[i] << " ";
		cout << endl;
	}
}
