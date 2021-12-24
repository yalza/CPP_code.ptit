#include<iostream> 
using namespace std;
typedef long long int ll;
ll add(ll a, ll b, ll p){
if (b==0) 
return 0;
ll x= add(a,b/2,p);
if (b%2==0) return ( 2* (x%p)) %p;
else return (a%p + 2*(x%p)) %p; 
} 
int main(){ int t;
cin>>t; while(t--){
	ll a,b,p; 
	cin>>a>>b>>p;
	cout<<add(a,b,p)<<endl;
}
return 0; 
}
