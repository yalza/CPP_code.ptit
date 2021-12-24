#include <iostream>
#include<math.h>
#include<cstring>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
		long long int n; cin >> n;
		while (n % 2 == 0) {
			cout << 2 << " "; n /= 2;
		}
		long long int i = 3;
		while (i <= sqrt(n)) {
			while (n % i == 0) {
				cout << i << " ";
				n /= i;
			}
			i+=2;
		}
		if(n>2)
		cout <<n;
		cout<<endl;
	}
}
