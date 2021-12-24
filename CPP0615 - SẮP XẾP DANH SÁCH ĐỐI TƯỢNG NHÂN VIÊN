#include<iostream>
#include<cstdbool>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;
class NhanVien {
private:
    string a, b, c, e, f, g;
public:
    string d;
    int n, t, nam;
    NhanVien() {
        a = b = c = d = e = f = g = "";
    }
    friend istream& operator>>(istream& mycin, NhanVien&);
    friend ostream& operator<<(ostream& mycout, NhanVien);
};
int coun = 0;
istream& operator>>(istream& mycin, NhanVien& x) {
    if (coun == 0)mycin.ignore();
    coun++;
    x.a = string(5 - to_string(coun).length(), '0') + to_string(coun);
    getline(mycin, x.b);
    getline(mycin, x.c);
    getline(mycin, x.d);
    x.t =( x.d[0] - '0') * 10 + x.d[1] - '0';
    x.n = (x.d[3] - '0') * 10 + x.d[4] - '0';
    x.nam = (x.d[6] - '0') * 1000 + (x.d[7] - '0') * 100 + (x.d[8] - '0') * 10 + (x.d[9] - '0');
    getline(mycin, x.e);
    getline(mycin, x.f);
    getline(mycin, x.g);
    return mycin;
}
ostream& operator<<(ostream& mycout, NhanVien x) {
    mycout << x.a << " " << x.b << " " << x.c << " " << x.d << " " << x.e << " " << x.f << " " << x.g << endl;
    return mycout;
}
bool cmp(NhanVien A, NhanVien B) {
    if (A.nam < B.nam)return true;
    if (A.nam == B.nam && A.t < B.t)return true;
    if (A.nam == B.nam && A.t == B.t && A.n < B.n)return true;
    return false;
}
void sapxep(NhanVien* ds, int N) {
    sort(ds, ds + N, cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
