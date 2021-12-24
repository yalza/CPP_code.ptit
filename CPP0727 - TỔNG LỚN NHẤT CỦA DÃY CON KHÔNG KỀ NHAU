#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n),N(n);
		for (int i = 0; i < n; i++) {
			cin >> M[i]; N[i] = M[i];
		}
			long int in = M[0];
			long int ex = 0;
			long int ex_new;
			for (int i = 1; i < n; i++)
			{
				ex_new = max(in, ex);
				in = ex + M[i];
				ex = ex_new;
			}
			cout << max(in, ex) << endl;
		
	}
}
