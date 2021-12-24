#include <iostream>
#include<vector>
using namespace std;
int test(vector<int> m, int n, int k) {
    int a = 0;
    for (int i = 0; i < n; i++) {
        if (m[i] <= k)a++;
    }
    int b = 0;
    for (int i = 0; i < a; i++)
        if (m[i] > k)b++;
    int c = b;
    for (int i = 0, j = a; j < n; i++, j++) {
        if (m[i] > k)b--;
        if (m[j] > k)b++;
        c=min(c,b);
    }
    return c;
}
int main()
{
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> m(n);
        for (int i = 0; i < n; i++)cin >> m[i];
        cout << test(m, n, k)<<endl;
    }
}
