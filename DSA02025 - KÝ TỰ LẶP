#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<queue>
using namespace std;
typedef pair<int, int> p;
typedef long long ll;
int n, res = 100000000;
string M[100];
int  N[100];
bool check[100];
int count(string a, string b) {
	int cnt = 0;
	for (auto x : a)
		for (auto y : b)
			if (x == y)cnt++;
	return cnt;
}
void Try(int i, int sum) {
	for (int j = 1; j <= n; j++) {
		if (!check[j]) {
			check[j] = true;
			N[i] = j;
			if (i == n) {
				res = min(res, sum + count(M[N[i - 1]], M[j]));
			}
			else if (res > sum && i < n)Try(i + 1, sum + count(M[N[i - 1]], M[j]));
			check[j] = false;
		}
	}
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> M[i];
	check[0] = true;
	N[1] = 1;
	Try(1, 0);
	cout << res << endl;
}
