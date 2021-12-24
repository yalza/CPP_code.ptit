#include<iostream>
using namespace std; 
const int MAXLIST = 10000; 
typedef struct {
	int n;
	int nodes[MAXLIST]; 
} List; 
List ds; 
int main() { 
	int k=0; 
	int M[10001]={0}; 
	int m; 
	while(cin>>m) { 
		ds.nodes[k++]=m; 
		M[m]++; 
		ds.n=k; 
	} 
	for(int i=0;i<ds.n;i++) { 
		if(M[ds.nodes[i]]>0) { 
			cout<<ds.nodes[i]<<" "<<M[ds.nodes[i]]; 
			cout<<endl; M[ds.nodes[i]]=0; 
		} 
	} 
	return 0; 
}
