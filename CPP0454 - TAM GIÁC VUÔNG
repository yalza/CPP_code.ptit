#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;

int test(vector<ll> m,int n){
    for (int i = n - 1; i >= 2; i--) {
        int l = 0;
        int r = i - 1;
        while (l < r) {
			if (m[l] + m[r] == m[i])
				return 1;
            (m[l] + m[r] < m[i]) ? l++ : r--;
        }
    }
	return 0;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<ll> m(n);
		for (int i = 0; i < n; i++)cin >> m[i];
		sort(m.begin(), m.end());
		for (int i = 0; i < n; i++)m[i] *= m[i];
		if (test(m, n))cout << "YES\n";
		else
			cout << "NO\n";
	}
}
