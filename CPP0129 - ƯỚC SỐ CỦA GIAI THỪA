#include<iostream>
using namespace std;
int test(int n, int p) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		int t = i;
		while (t % p == 0) {
			count++;
			t /= p;
		}
	}
	return count;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, p; cin >> n >> p;
		cout << test(n, p) << endl;
	}
}
