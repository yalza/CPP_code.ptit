#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string s,a; cin >> s;
		vector<int> M(110, 0);
		for (int i = 0; i < s.length(); i++)M[s[i]-'0']++;
		int max = 10; int check = 0,check1=0;
		for (int i = 0; i < 10; i++) {
			if (M[i] >= M[max] && M[i] % 2 == 1)max = i;
			if (M[i] > 0 && M[i] % 2 == 0&&i>0)check = 1;
			if (i > 0 && M[i] != 0)check1 = 1;
		}
		if (check1 != 0) {
			if (check == 0) {
				int m = 1;
				for (int i = 1; i < 10; i++)
					if (M[i] > 0 && M[i] >= M[m]) {
						m = i;
					}
				for (int i = 0; i < M[m]; i++)a.push_back(m + '0');
				cout << a << endl;

			}
			else {
				for (int i = 0; i < 10; i++)
					if (M[i] % 2 == 1 && M[i] < M[max] || M[i] == M[max] && i < max)
						M[i] = 0;
				for (int i = 9; i >= 0; i--)
					if (i != max)
						for (int j = 0; j < M[i] / 2; j++)a.push_back(i + '0');
				for (int i = 0; i < M[max]; i++)a.push_back(max + '0');
				for (int i = 0; i < 10; i++)
					if (i != max)
						for (int j = 0; j < M[i] / 2; j++)a.push_back(i + '0');
				while (a[0] == '0')a.erase(0, 1);
				while (a[a.length() - 1] == '0')a.erase(a.length() - 1, 1);
				cout << a << endl;
			}
		}
		else {
			cout << endl;
		}
	}
}
