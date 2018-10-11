#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, sum = 0, total = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            sum += a[i];
            total++;
        }
    }
    cout << (sum + (total - 1)) / total << "\n";

    return 0;
}