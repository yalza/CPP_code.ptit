#include<iostream>
#include<cmath>
using namespace std;
int test(int n) {
    int a = 0, b = 0;
    while (n) {
        int i = n % 10;
        if (i % 2 == 0)a++;
        else
            b++;
        n /= 10;
    }
    if (a == b)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    int s = 0;
    for (int i = pow(10, t - 1); i < pow(10, t); i++) {
        if (test(i)) {
            cout << i << " "; s++;
            if (s % 10 == 0)cout << endl;
        }
   }
}
