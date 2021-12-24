#include <iostream>
#include<math.h>
#include<cstring>
using namespace std;
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
		long long int n,m; cin >> m>>n;
		int count = 0;
		for (int i = sqrt(m); i <= sqrt(n); i++) {
			if (snt(i))count++;
		}
		cout << count << endl;;
	}
}
