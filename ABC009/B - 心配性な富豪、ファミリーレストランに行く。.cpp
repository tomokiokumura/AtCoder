#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);

    int temp = a[0], counter;
    int j;
    for(j = 0; j < n; j++){
        if(temp == a[j]){
            continue;
        }
        else{
            break;
        }
    }
    cout << a[j] << "\n";
    
    return 0;
}