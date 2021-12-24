#include<iostream>
using namespace std;
typedef long long int ll;
int test(int a, ll m) {
	int sum = 0;
	for (int i = 1; i <= a; i++) 
		sum += i % m;
	if (sum == m)return 1;
return 0;
}
int main() {
	int t; cin >> t;
	while (t--) {
		ll a, m; cin >> a >> m;
		cout << test(a, m) << endl;
	}
}
