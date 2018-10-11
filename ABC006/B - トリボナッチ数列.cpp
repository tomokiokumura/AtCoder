#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    long long a[n];
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    for(int i = 3; i < n; i++){
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
    cout << a[n - 1] % 10007 << "\n";
    // for(int i = 3; i < n; i++){
    //     a[i] = (a[i - 1] + a[i - 2] + a[i - 3]) % 10007;
    // }
    // cout << a[n - 1] << "\n";

    return 0;
}