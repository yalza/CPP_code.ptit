#include<iostream> 
#include <set>
#include<algorithm>
using namespace std; 
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int M[1000000];
		for (int i = 0; i < n; i++)cin >> M[i];
		multiset<int> N;
		for (int i = 0; i < k; i++)
			N.insert(M[i]);
		for (int i = k; i <= n; i++) {
			cout << *N.rbegin()<<" ";
			N.erase(N.find(M[i-k]));
			N.insert(M[i]);
		}
		cout << endl;
	}
}
