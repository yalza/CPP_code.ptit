#include <iostream>
#include<math.h>
#include<cstring>
using namespace std;
typedef long long int ll;
int snt(ll n) {
	if (n < 2)return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int main()
{
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		for (int i = 2; i <= n; i++)
			if (snt(i))cout << i << " ";
		cout << endl;
	}
}
