#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		int min = 10000;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				int x = m[i] + m[j];
				if(abs(x)<abs(min))min=x;
			}
		}
		cout << min << endl;
	}
}
