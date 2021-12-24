#include <iostream>
#include<math.h>
#include<cstring>
using namespace std;
typedef long long int ll;
int snt(int n) {
	if (n < 2)return 0;
	else
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)return 0;
	return 1;
}

int main()
{
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int count = 0;
		for (int i = m; i <= n; i++) {
			if (snt(i))count++;
		}
		cout << count << endl;
	}
}
