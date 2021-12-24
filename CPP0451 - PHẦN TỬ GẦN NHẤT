#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<stdbool.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000000] = { 0 };
		for (int i = 0; i < n; i++)cin >> M[i];
		int k, x; cin >> k >> x;
		int z = lower_bound(M, M + n, x) - M;
		if (M[z] == x) {
			for (int i = z - k / 2; i < z; i++){
			    if(i>=0)
			    cout << M[i] << " ";
			    else cout<<0<<" ";
			}
			for (int i = z+1; i <= z+k/2; i++)
			{
				if (i < n)cout << M[i] << " ";
				else cout << 0 << " ";
			}
		}
		cout << endl;
	}
}
