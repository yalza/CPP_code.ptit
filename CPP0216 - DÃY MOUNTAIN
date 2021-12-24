#include<iostream>
#include<vector>
#include<string>
using namespace std;

string test(vector<int> m, int l, int k) {
	int a = 0;
	int x = 0;
	for (int i = l; i < k; i++) {
		if (m[i + 1] >= m[i]&&i)a++;
		if (m[i] > m[x])x = i;
	}
	if (m[x] < m[k])x = k;
	if (a == k - l)return "Yes\n";
	int b = 0, c = 0;
	for (int i = l; i < x; i++)if (m[i + 1] >= m[i])b++;
	for (int i = x; i < k; i++)if (m[i + 1] <= m[i])c++;
	if (b == x - l && c == k - x)return "Yes\n";
	return "No\n";
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		int l, k; cin >> l >> k;
		cout<<test(m,l,k);
	}
}
