#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string add(string a, string b) {
    if (a.length() < b.length())swap(a, b);
    while (a.length() != b.length())b.insert(0, "0");
    string c;
    int nho = 0;
    for (int i = a.length() - 1; i >= 0; i--) {
        int x = a[i] + b[i] - 96 + nho;
        nho = x / 10;
        int z = x % 10;
        c.push_back(z + '0');
    }
    if (nho > 0)c.push_back(nho + '0');
    for (int i = 0; i < c.length() / 2; i++)swap(c[i], c[c.length() - i - 1]);
    return c;
}
string test(string s, int n)
{
   string M[1000][1000];
   for (int i = 0; i < 100; i++) {
       for (int j = 0; j < 100; j++)M[i][j] = "0";
   }
    M[0][(s[0] - '0') % n]=add(M[0][(s[0] - '0') % n],"1");
    string a;
    for (int i = 1; i < s.length(); i++)
    {
        M[i][(s[i] - '0') % n]=add(M[i][(s[i] - '0') % n],"1");
        for (int j = 0; j < n; j++)
        {
            M[i][j] = add(M[i][j], M[i - 1][j]);
            M[i][(j * 10 + (s[i] - '0')) % n] =add(M[i][(j * 10 + (s[i] - '0')) % n] , M[i - 1][j]);
        }
    }

    return M[s.length()-1][0];
}


int main()
{
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> x >> n;
        string s; cin >> s;
        cout << test(s, n) << endl;
    }

}
