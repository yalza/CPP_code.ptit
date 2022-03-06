#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
bool cmp(pair<int, int> A, pair<int, int> B) {
	return A.second > B.second;
}
int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string a, b; 
		getline(cin, a);
		getline(cin, b);
		for (int i = 0; i < a.length(); i++)if (a[i] == '+')a[i] = ' ';
		for (int i = 0; i < b.length(); i++)if (b[i] == '+')b[i] = ' ';
		stringstream m(a), n(b);
		string token;
		vector<pair<int,int>> M, N;
		set<int> X;
		while (m >> token) {
			int i = token.find("*x^");
			M.push_back({ stoi(token.substr(0,i)),stoi(token.substr(i + 3)) });
			X.insert(stoi(token.substr(i + 3)));
		}
		while (n >> token) {
			int i = token.find("*x^");
			N.push_back({ stoi(token.substr(0,i)),stoi(token.substr(i + 3)) });
		}
		for (int i = 0; i < M.size(); i++) {
			for (int j = 0; j < N.size(); j++) {
				if (N[j].second == M[i].second)M[i].first += N[j].first;
			}
		}
		for (auto x : N) {
			if (X.count(x.second) == 0)M.push_back(x);
		}
		sort(M.begin(), M.end(), cmp);
		for (int i = 0; i < M.size() - 1; i++) {
			cout << M[i].first << "*x^" << M[i].second << " + ";
		}
		cout << M[M.size() - 1].first << "*x^" << M[M.size() - 1].second << endl;
	}
}
