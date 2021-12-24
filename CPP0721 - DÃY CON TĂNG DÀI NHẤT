#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n), N(n, 1);
		for (int i = 0; i < n; i++)cin >> M[i];
		int dem = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (M[i] > M[j])N[i] = max(N[i], N[j] + 1);
			}
			if (dem < N[i])dem = N[i];
		}
		cout << dem << endl;
	}
}
