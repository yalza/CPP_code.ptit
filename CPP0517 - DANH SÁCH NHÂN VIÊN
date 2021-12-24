#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct NhanVien {
    string a, b, c, d, e, f;
};
int z=0;
void nhap(NhanVien&A) {
    if(z==0)getchar();
    z++;
    getline(cin, A.a);
    getline(cin, A.b);
    getline(cin, A.c);
    getline(cin, A.d);
    getline(cin, A.e);
    getline(cin, A.f);
}
void inds(NhanVien ds[],int N){
    for (int i = 0; i < N; i++)
    {
        string s;
        if (i < 9)s = "0000";
        else s = "000";
        cout << s<<i+1<<" "<< ds[i].a << " " << ds[i].b << " " << ds[i].c << " " << ds[i].d << " " << ds[i].e << " " << ds[i].f<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
