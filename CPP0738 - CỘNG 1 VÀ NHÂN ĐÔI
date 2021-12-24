#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n);
		for (int i = 0; i < n; i++)cin >> M[i];
		int a = 0; int max = 0;
		for (int i = 0; i < n; i++) {
			 int dem = 0;
			while (M[i]) {
				if (M[i] % 2 == 0) {
					M[i] /= 2; dem++;
				}
				else {
					M[i] -= 1; a++;
				}
			}
			if (max < dem)max = dem;
		}
		cout << max + a << endl;
	}

}
