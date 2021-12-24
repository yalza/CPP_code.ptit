#include<iostream>
#include<vector>
using namespace std;
int test(vector<int> M, int n, int x)
{
    int sum = 0, min_len = n + 1;
    int start = 0, end = 0;
    while (end < n) {
        while (sum <= x && end < n)
            sum += M[end++];
        while (sum > x && start < n) {

            if (end - start < min_len)
                min_len = end - start;

            sum -= M[start++];
        }
    }
    return min_len;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> M(n);
		for (int i = 0; i < n; i++)cin >> M[i];
        if (test(M, n, k) > n)cout << -1 << endl;
        else
        cout << test(M, n, k) << endl;
	}
}
