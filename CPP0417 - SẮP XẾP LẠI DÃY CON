#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n);
		for (int i = 0; i < n; i++)cin >> M[i];
		int i = 0;
		while (M[i + 1] >= M[i])i++;
		int j = n - 1;
		while (M[j - 1] <= M[j])j--;
		int max = 0,min=1000000;
		for (int l = i; l <= j; l++) {
			if (M[l] < min)min = M[l];
			if (M[l] > max)max = M[l];
		}
		int a = i;
		for (int l = i; l >= 0; l--) {
			if (M[l] > min)
				a = l;
		}
		int b = j;
		for (int l = j; l < n; l++) {
			if (M[l] < max)
				b = l;
		}
		cout << a+1 << " " << b+1 << endl;
	}
}
