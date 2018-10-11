#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, ans;
    cin >> a >> b;
    if(a % b == 0){
        ans = 0;
    }
    else{
        ans = b - a % b;
    }
    cout << ans << "\n";

    return 0;
}