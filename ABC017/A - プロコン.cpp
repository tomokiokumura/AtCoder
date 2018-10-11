#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int s[3], e[3], sum = 0;
    for(int i = 0; i < 3; i++){
        cin >> s[i] >> e[i];
        sum += s[i] * (e[i] * 0.1);
    }
    cout << sum << "\n";

    return 0;
}