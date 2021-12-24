#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n);
		int min = -10000000;
		for (int i = 0; i < n; i++) {
			cin >> M[i];
			if (M[i] > min)min = M[i];
		}
		if (min <= 0)cout << min << endl;
		else {
			long long int s = 0, max = -1000000000;
			for (int i = 0; i < n; i++) {
				s += M[i];
				if (max < s)max = s;
				if (s < 0)s = 0;
			}
			cout << max << endl;
		}

	}
}
