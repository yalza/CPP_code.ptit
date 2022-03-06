#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n), N(n, 1);
		for (int i = 0; i < n; i++)cin >> M[i];
		for (int i = 1; i < n; i++) {
			N[i] = 1;
			for (int j = i - 1; j >= 0;) {
				if (M[j] <= M[i]) {
					N[i] += N[j];
					j -= N[j];
				}
				else break;
			}
		}
		for (auto x : N)cout << x << " ";
		cout << endl;
	}
}
