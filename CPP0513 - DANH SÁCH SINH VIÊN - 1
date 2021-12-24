#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct SinhVien {
    string a, b, c;
    float d;
};
void input(SinhVien& A) {
    getline(cin, A.a);
     getline(cin, A.b);
    getline(cin, A.c);
    cin >> A.d;
    getchar();
}
void nhap(SinhVien ds[], int n) {
    getchar();
    for (int i = 0; i < n; i++) {
        input(ds[i]);
    }
}
void in(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        if (ds[i].c[1] == '/')
            ds[i].c.insert(0, "0");
        if (ds[i].c[4] == '/')
            ds[i].c.insert(3, "0");
        string s;
        if (i < 9)s = "B20DCCN00";
        else s = "B20DCCN0";
        cout << s << i + 1 << " " << ds[i].a << " " << ds[i].b << " " << ds[i].c << " " << fixed << setprecision(2) << ds[i].d << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
