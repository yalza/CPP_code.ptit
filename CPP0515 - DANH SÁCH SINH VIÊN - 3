#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<iomanip>
#include<cstdbool>
using namespace std;
struct SinhVien {
    char name_x[100];
    string ns, name, lop, ma;
    float gpa;
};
void nhap(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i].ma = "B20DCCN000";
        int tg = i + 1;
        for (int j = a[i].ma.size() - 1; tg > 0; j--) {
            a[i].ma[j] += tg % 10;
            tg /= 10;
        }
        scanf(" %[^\n]", a[i].name_x);
        char* c = strtok(a[i].name_x, " ");
        while (c != NULL) {
            for (int i = 1; i < strlen(c); i++) c[i] = tolower(c[i]);
            c[0] = toupper(c[0]);
            a[i].name += c;
            if (isalpha(c[strlen(c) - 1])) a[i].name += " ";
            c = strtok(NULL, " ");
        }
        a[i].name.pop_back();
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
        if (a[i].ns[1] == '/') a[i].ns.insert(0, 1, '0');;
        if (a[i].ns[4] == '/') a[i].ns.insert(3, 1, '0');
    }
}
bool cmp(SinhVien X, SinhVien B) {
    if (X.gpa > B.gpa)return true;
    return false;
}
void sapxep(SinhVien* M, int N) {
    sort(M, M + N, cmp);
}
void in(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i].ma << " " << a[i].name << " " << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << "\n";
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
