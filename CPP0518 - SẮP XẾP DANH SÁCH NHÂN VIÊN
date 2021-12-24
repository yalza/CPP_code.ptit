#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<cstdbool>
using namespace std;
struct NhanVien {
    string a, b, c, d, e, f;
    int n,t,nam,ma;
    string s;
};
int z = 0;
void nhap(NhanVien& A) {
    if (z == 0)getchar();
    z++;
    getline(cin, A.a);
    getline(cin, A.b);
    getline(cin, A.c);
    getline(cin, A.d);
    getline(cin, A.e);
    getline(cin, A.f);
    A.t = (A.c[0] - '0') * 10 + A.c[1] - '0';
    A.n = (A.c[3] - '0') * 10 + A.c[4] - '0';
    A.nam = (A.c[6] - '0') * 1000 + (A.c[7] - '0') * 100 + (A.c[8] - '0') * 10 + (A.c[9] - '0');
}
bool cmp(NhanVien A, NhanVien B) {
    if (A.nam < B.nam)return true;
    if (A.nam == B.nam && A.t < B.t)return true;
    if (A.nam == B.nam && A.t == B.t && A.n < B.n)return true;
    return false;
}
void inds(NhanVien ds[], int N) {
    for (int i = 0; i < N; i++)
    {
        string s;
        if (ds[i].ma < 9)s = "0000";
        else s = "000";
        cout << s << ds[i].ma + 1 << " " << ds[i].a << " " << ds[i].b << " " << ds[i].c << " " << ds[i].d << " " << ds[i].e << " " << ds[i].f << endl;
    }
}
void sapxep(NhanVien* ds, int N) {
    for (int i = 0; i < N; i++)ds[i].ma = i;
    sort(ds, ds + N, cmp);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
