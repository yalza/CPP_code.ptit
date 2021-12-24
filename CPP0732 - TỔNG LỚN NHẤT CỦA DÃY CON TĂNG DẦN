#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<long long int> M(n), N(n);
		for (int i = 0; i < n; i++) {
			cin >> M[i]; N[i] = M[i];
		}
		long long int dem = 0;
		for (int i = 0; i < n; i++) {
			long long int max = 0;
			for (int j = 0; j < i; j++){
				if (M[i] > M[j]) {
					if (N[j] > max)max = N[j];
				}
			}
			N[i] += max;
			if (dem < N[i])dem = N[i];
		}
		cout << dem << endl;
	}
}
