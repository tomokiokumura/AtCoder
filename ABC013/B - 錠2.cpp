#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, ans;
    cin >> a >> b;
    int temp = abs(b - a);
    if(temp > 10 - temp){
        ans = 10 - temp;
    }
    else{
        ans = temp;
    }
    cout << ans << "\n";

    return 0;
}