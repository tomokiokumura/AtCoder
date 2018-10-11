#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    string ans;
    if(a.length() > b.length()){
        ans = a;
    }
    else{
        ans = b;
    }
    cout << ans << "\n";

    return 0;
}