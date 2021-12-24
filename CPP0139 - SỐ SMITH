#include<iostream>
#include<math.h>
using namespace std;
int snt(int n) {
	if (n < 2)return 0;
	else
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)return 0;
	return 1;
}
int sum(int n) {
	int x = 0;
	while (n) {
		x += n % 10;
		n /= 10;
	}
	return x;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a = n;
		int z = 0;
		for (int i = 2; i < n; i++) {
			while (snt(i) && a % i == 0) {
				z += sum(i);
				a /= i;
			}
		}
		if (z == sum(n))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
