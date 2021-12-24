#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<stdbool.h>
#include<sstream>
#include<iomanip>
using namespace std;
int coun = 0;
class SinhVien {
private:
    string a, b, c, d;
    char name_x[100];
public:
    float e;
    SinhVien() {
        a = b = c = d = "";
        e = 0;
    }
    friend istream& operator>>(istream&, SinhVien&);
    friend ostream& operator<<(ostream&, SinhVien);
    friend void chuanhoa(SinhVien&);
};
istream& operator>>(istream& mycin, SinhVien& x) {
    coun++;
    x.a = "B20DCCN" + string(3 - to_string(coun).length(), '0') + to_string(coun);
    scanf(" %[^\n]", x.name_x);
      mycin.ignore();
    char* c = strtok(x.name_x, " ");
    while (c != NULL) {
        for (int i = 1; i < strlen(c); i++) c[i] = tolower(c[i]);
        c[0] = toupper(c[0]);
        x.b += c;
        if (isalpha(c[strlen(c) - 1])) x.b += " ";
        c = strtok(NULL, " ");
    }
    getline(mycin, x.c);
    getline(mycin, x.d);
    cin >> x.e;
  
    if (x.d[1] == '/')x.d.insert(0, "0");
    if (x.d[4] == '/')x.d.insert(3, "0");
    return mycin;
}

ostream& operator<<(ostream& mycout, SinhVien x) {
    mycout << x.a << " " << x.b << " " << x.c << " " << x.d << " " << fixed << setprecision(2) << x.e << endl;
    return mycout;
}
bool cmp(SinhVien X, SinhVien Y) {
    return X.e > Y.e;
}
void sapxep(SinhVien*ds,int N) {
    sort(ds, ds + N, cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
