#include<iostream>
using namespace std;

unsigned long long power(unsigned long long x,int y, int p)
{
    unsigned long long res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)res = (res * x) % p;
        y = y /2;
        x = (x * x) % p;
    }
    return res;
}
unsigned long long mod(unsigned long long n,int p)
{
    return power(n, p - 2, p);
}

unsigned long long test(unsigned long long n, int r, int p)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    unsigned long long M[10000];
    M[0] = 1;
    for (int i = 1; i <= n; i++)M[i] = (M[i - 1] * i) % p;

    return (M[n] * mod(M[r], p) % p * mod(M[n - r], p) % p) % p;
}

int main()
{
    int t; cin >> t;
    while (t--) {
        int n, r, p = 1000000007;
        cin >> n >> r;
        cout <<test(n, r,p) << endl;
    }
}
