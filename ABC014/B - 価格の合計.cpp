#include<iostream>

using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, x, ans = 0;
    cin >> n >> x;
    int a[n], bin[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        bin[i] = (x % 2);
        x = x / 2;
    }
    for(int i = 0; i < n; i++){
        if(bin[i] == 1){
            ans += a[i];
        }
    }
    cout << ans << "\n";

    return 0;
}