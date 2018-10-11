#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum * 10000 / n << "\n";

    return 0;
}