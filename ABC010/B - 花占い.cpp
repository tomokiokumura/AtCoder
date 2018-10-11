#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n], pick[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        pick[i] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 10; j++){
            if(a[i] % 3 == 2 || a[i] % 2 == 0){
                a[i]--;
                pick[i]++;
            }
            else{
                break;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += pick[i];
    }
    cout << sum << "\n";

    return 0;
}