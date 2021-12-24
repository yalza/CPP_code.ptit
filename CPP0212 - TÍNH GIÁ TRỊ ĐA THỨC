#include<iostream>
using namespace std;
#define modu 1000000007
typedef long long int ll;
ll test(int x,int n) {
	ll p=1;
	for (int i = 0; i < n; i++) {
		p *= x;
		p %= modu;
	}
	return p;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n >> x;
		int M[2000];
		for (int i = n - 1; i >= 0; i--)cin >> M[i];
		ll sum = M[0];
		for (int i = 1; i < n; i++) {
			sum += M[i] * test(x, i);
			sum %= modu;
		}
		cout << sum << endl;
	}
}
