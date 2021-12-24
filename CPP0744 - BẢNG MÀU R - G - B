#include<iostream>
#include<vector>
using namespace std;
long long int RBG(int n, int r, int b, int g)
{
    vector<long long int> M(n + 1);
    M[0] = 1;
    for (int i = 1; i <= n; i++)
        M[i] = M[i - 1] * i;
    int left = n - (r + g + b);
    long long int sum = 0;
    for (int i = 0; i <= left; i++)
    {
        for (int j = 0; j <= left - i; j++)
        {
            int k = left - (i + j);
            sum = sum + M[n] /(M[i + r] * M[j + b] * M[k + g]);
        }
    }
    return sum;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, r, g, b; cin >> n >> r >> b >> g;
        cout << RBG(n, r, b, g) << endl;
	}
}
