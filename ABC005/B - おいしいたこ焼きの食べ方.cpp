#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, min = 101;
    cin >> n;
    int t[n];
    for(int i = 0; i < n; i++){
        cin >> t[i];
        if(t[i] < min){
            min = t[i];
        }
    }
    cout << min << "\n";

    return 0;
}