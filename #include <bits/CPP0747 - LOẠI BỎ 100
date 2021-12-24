#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    string s;
    int zero = 0, ans = 0;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--) 
    {
      zero += (s[i] == '0' ? 1 : 0);
      if (s[i] == '1') 
      {
        if (zero > 1) 
        {
          ans += 3;
          zero -= 2;
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
