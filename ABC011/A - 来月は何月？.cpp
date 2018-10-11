#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    if(n == 12){
        cout << 1 << "\n";
    }
    else{
        cout << n + 1 << "\n";
    }

    return 0;
}