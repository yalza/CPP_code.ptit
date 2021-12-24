#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int seach(vector<int> m, int n, int k) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int a = (l + r) / 2;
		if (m[a] == k)return 1;
		else if (m[a] > k)r = a - 1;
		else l = a + 1;
	}
	return -1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int o = 0;
		int m, n; cin >> m >> n;
		vector<int> A(m), B(n), z(n);
		int max = 0;
		for (int i = 0; i < m; i++) {
			cin >> A[i];
			if (A[i] > max)max = A[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> B[i];
			if (B[i] > max)max = B[i];
			z[i] = B[i];
		}
		vector<int> v(max + 1),p(m);
		for (int i = 0; i <= max; i++)v[i] = 0;
		
		int idx = 0;
		sort(z.begin(), z.end());
		for (int i = 0; i < m; i++) {
			if (seach(z, n, A[i]) == 1)
				v[A[i]]++;
			else if(seach(z, n, A[i]) == -1)
				p[idx++] = A[i];
		}
		for (int i = 0; i < n; i++) {
			int f = 0;
			for (int j = 0; j < i; j++)if (B[i] == B[j])f++;
			if (f > 0)continue;
			for (int j = 0; j < v[B[i]]; j++) {
				cout << B[i] << " ";
				o++;
				if (o >= m)break;
			}
			if (o >= m)break;
		}
		p.resize(idx);
		sort(p.begin(), p.end());
		for (int i = 0; i < idx; i++) {
			cout << p[i] << " ";
			o++;
			if (o >= m)
				break;
		}
		cout << endl;
	}
}
