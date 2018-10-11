#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int m;
    string ans = "", temp;
    cin >> m;
    
    if(m < 100){
        ans = "00";
    }
    else if(m >= 100 && m <= 5000){
        temp = to_string(m);
        if(m / 1000 >= 1){
            ans += temp[0];
            ans += temp[1];
        }
        else{
            ans += "0";
            ans += temp[0];
        }
    }
    else if(m >= 6000 && m <= 30000){
        ans = to_string(m / 1000 + 50);
    }
    else if(m >= 35000 && m <= 70000){
        ans = to_string((m / 1000 - 30) / 5 + 80);
    }
    else if(m > 70000){
        ans = "89";
    }

    cout << ans << "\n";

    return 0;
}