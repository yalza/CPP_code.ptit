#include<iostream>
#include<fstream>
#include<set>
#include<vector>

using namespace std;

int main() {
	fstream file;
	set<int> X, Y;
	vector<int> Z;
	file.open("DATA.in");
	int n;
	int a = 0;
	while (file >> n) Z.push_back(n);
	for (int i = 2; i < Z[0] + 2; i++)X.insert(Z[i]);
	for (int i = Z[0] + 2; i < Z.size(); i++)Y.insert(Z[i]);
	for (auto i = X.begin(); i != X.end(); i++)
		if (Y.count(*i) != 0)cout << *i << " ";
}
