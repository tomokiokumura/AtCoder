#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int X, Y, ans;
    cin >> X >> Y;
    ans = X > Y ? X : Y;
    cout << ans << "\n";

    return 0;
}