#include <bits/stdc++.h>
using namespace std;
int test(int x, int Y[], int n, int N[])
{
    if (x == 0)
        return 0;
    if (x == 1)
        return N[0];
    int* i = upper_bound(Y, Y + n, x);
    int a = (Y + n) - i;
    a += (N[0] + N[1]);
    if (x == 2)
        a -= (N[3] + N[4]);
 
    if (x == 3)
        a += N[2];
    return a;
}

int count1(int X[], int Y[], int m, int n)
{
    int N[5] = { 0 };
    for (int i = 0; i < n; i++)
        if (Y[i] < 5)
            N[Y[i]]++;
    sort(Y, Y + n);
    int t = 0; 
    for (int i = 0; i < m; i++)
        t+= test(X[i], Y, n, N);
    return t;
}
int main()
{
    int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		int m[100000], n[100000];
		for (int i = 0; i < a; i++)cin >> m[i];
		for (int i = 0; i < b; i++)cin >> n[i];
		cout<<count1(m,n,a,b)<<endl;
	}
}
