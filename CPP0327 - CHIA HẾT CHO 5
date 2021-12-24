#include <iostream>
#include<string>

using namespace std;
int main()
{
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int x = 0;
        for (int i = 0; i < s.length(); i++) 
            x = (2 * x + s[i] - 48)%5;
        if (x % 5 == 0)cout << "Yes\n";
        else cout << "No\n";
    }
}
