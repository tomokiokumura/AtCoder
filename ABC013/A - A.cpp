#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    char x;
    cin >> x;
    int ans;
    switch (x){
        case 'A':
            ans = 1;
            break;
        case 'B':
            ans = 2;
            break;
        case 'C':
            ans = 3;
            break;
        case 'D':
            ans = 4;
            break;
        default:
            ans = 5;
            break;
    }
    cout << ans << "\n";

    return 0;
}