#include<iostream>
#include<math.h>
#include<stdbool.h>
using namespace std;
int main(){
  bool ok[1000007] = {false};
  for( long long i = 2; i<=sqrt(1000007);i++)
  {
    if( ok[i] == false)
    {
      for(long long j = 2*i; j<= 1000007; j+=i)
      {
        ok[j] = true;
      }
    }
  }
  int t;
  cin >> t;
  while(t--){
    long long n;
  cin >> n;
  int check = 0;
  for( long long i = 2; i <= n/2; i++){
    if(ok[i] == false && ok[n-i] == false)
    {
      cout << i << " " << n -i << endl;
      check = 1;
      break;
 
    } 
  }
  if( check == 0) cout << "-1" << endl;
  }
}
