#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<stdbool.h>
using namespace std;
struct vb {
	string s;
	int count;
};
int tn(string s) {
	if (s.length() == 1)return 0;
	for (int i = 0; i < s.length(); i++)
		if (s[i] != s[s.length() - i - 1])return 0;
	return 1;
}
bool cmp(vb X, vb Y) {
	if (X.s.length() > Y.s.length())return true;
	if (X.s.length() == Y.s.length() && X.s > Y.s)return true;
	return false;
}
int main() {
	vb M[10000];
	char N[1000];
	int g = 0;
	while (scanf("%s", &N) != EOF) {
		for (int j = 0; j < strlen(N); j++)M[g].s.push_back(N[j]);
		g++;
	}
	for (int i = 0; i < g; i++) {
		for (int j = 0; j < g; j++) {
			if (M[i].s == M[j].s)M[i].count++;
		}
	}
	sort(M, M + g, cmp);
	for (int i = 0; i < g; i++) {
		int x = 0;
		for (int j = 0; j < i; j++)if (M[i].s == M[j].s)x++;
		if (x > 0)continue;
		if (tn(M[i].s))
			cout << M[i].s << " " << M[i].count << endl;
	}
}
