#include<iostream>
using namespace std;

int solvInc(int a, int b){
    int retval = 0, temp = a;
    for(int i = 0; i < 10; i++){
        temp++;
        retval++;
        if(temp > 9){
            temp = 0;
        }
        if(temp == b){
            break;
        }
    }
    return retval;
}
int solvDec(int a, int b){
    int retval = 0, temp = a;
    for(int i = 0; i < 10; i++){
        temp--;
        retval++;
        if(temp < 0){
            temp = 9;
        }
        if(temp == b){
            break;
        }
    }
    return retval;
}

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a , b, ansInc, ansDec, ans;
    cin >> a >> b;
    ansInc = solvInc(a, b);
    ansDec = solvDec(a, b);
    if(ansInc > ansDec){
        ans = ansDec;
    }
    else{
        ans = ansInc;
    }
    cout << ans << "\n";

    return 0;
}