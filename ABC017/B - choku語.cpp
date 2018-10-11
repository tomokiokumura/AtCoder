#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string x, ans = "YES";
    cin >> x;

    for(int i = 0; i < x.length(); i++){
        if(x[i] == 'c' && x[i + 1] == 'h'){
            i++;
            continue;
        }
        else if(x[i] != 'o' && x[i] != 'k' && x[i] != 'u'){
            ans = "NO";
            break;
        }
    }
    if(x == ""){
        ans = "YES";
    }

    cout << ans << "\n";

    return 0;
}