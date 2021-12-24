#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n), N(n);
		for (int i = 0; i < n; i++)cin >> M[i];
		for (int i = 0; i < n; i++)cin >> N[i];
		int max = 0;
		for (int i = 0; i < n; i++) {
			int x = 0, y = 0;
			for (int j = i; j < n; j++) {
				x += M[j]; y += N[j];
				if (x == y) {
					if (max < j - i + 1)max = j - i + 1;
				}
			}
		}
		cout << max << endl;
	}
}
