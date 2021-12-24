#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		vector<int> M;
		int min = 1, pos = 0;
		if(s[0]=='I') {
			M.push_back(1);
			M.push_back(2);
			min = 3, pos = 1;
		}
		else
		{
			M.push_back(2);
			M.push_back(1);
			min = 3; pos = 0;
		}
		for (int i = 1; i < s.length(); i++) {
			if (s[i] == 'I') {
				M.push_back(min);
				min++; pos = i + 1;
			}
			else {
				M.push_back(M[i]);
				for (int j = pos; j <= i; j++)M[j]++;
				min++;
			}
		}
		for (int i = 0; i < M.size(); i++)cout << M[i];
		cout << endl;
	}
}
