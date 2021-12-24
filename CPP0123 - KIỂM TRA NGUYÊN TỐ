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
	int n; cin >> n;
	if (snt(n))cout << "YES\n";
	else cout << "NO\n";
}
