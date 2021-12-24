#include<iostream>
#include<string>
#include<stdbool.h>
using namespace std;
typedef long long int ll;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int k; cin >> k;
		int count = 0;
		for (int i = 0; i <= s.length() - k; i++) {
			int M[1000] = { 0 };
			int x = 0;
			for (int j = i; j < s.length(); j++) {
				if (M[s[j]] == 0)
					x++;
				M[s[j]]++;
				if (x == k) {
					count++;
				}
				if (x > k)break;
			}
		}
		
		cout << count << endl;
	}
}
