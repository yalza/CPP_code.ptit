#include <iostream>
#include<vector>
using namespace std;
int test(vector<int> arr, int n)
{
    vector<int> M(n);
    int min;
    M[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] == 0) M[i] = 10000000;

        else if (arr[i] >= n - i - 1)
            M[i] = 1;
        else {
            min = 1000000;
            for (int j = i + 1; j < n && j <= arr[i] + i; j++)
                if (min > M[j])min = M[j];
            if (min != 10000000)M[i] = min + 1;
            else M[i] = min; 
        }
    }
    return M[0];
}

int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> M(n);
        for (int i = 0; i < n; i++)cin >> M[i];
        cout << test(M, n) << endl;
    }
}
