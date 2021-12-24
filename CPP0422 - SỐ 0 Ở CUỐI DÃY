#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<long long int> a(n);
		for (int i = 0; i < n; i++)cin >> a[i];
		int dem = 0;
		for(int i=0;i<n;i++)
			if (a[i] != 0) {
				dem++; cout << a[i] << " ";
			}
		for (int i = 0; i < n - dem; i++)cout << 0 << " ";
		cout << endl;
	}
}
