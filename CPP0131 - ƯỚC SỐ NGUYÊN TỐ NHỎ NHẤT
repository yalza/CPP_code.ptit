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
int g(int n) {
	for (int i = 1; i <= n; i++)
		if (n % i == 0 && snt(i))
			return i;
}
int main()
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << 1 << " ";
		for (int i = 2; i <= n; i++)
			cout << g(i) << " ";
		cout << endl;
	}
}
