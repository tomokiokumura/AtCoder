#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, c;
    bool plus = false, minus = false;
    char ans;
    cin >> a >> b >> c;

    if(a + b == c){
        plus = ~plus;
    }
    if(a - b == c){
        minus = ~minus;
    }

    if(plus && minus){
        ans = '?';
    }
    else if(plus && !minus){
        ans = '+';
    }
    else if(!plus && minus){
        ans = '-';
    }
    else{
        ans = '!';
    }

    cout << ans << "\n";

    return 0;
}