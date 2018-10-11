#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string a;
    cin >> a;
    if(a.length() == 1 && a == "a"){
        cout << -1 << "\n";
    }
    else{
        cout << "a" << "\n";
    }

    return 0;
}