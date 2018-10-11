#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s, t;
    bool flag = true;
    cin >> s >> t;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == t[i]){
            continue;
        }
        else if(s[i] == '@' && (t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r')){
            continue;
        }
        else if(t[i] == '@' && (s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r')){
            continue;
        }
        else{
            flag = false;
        }
    }
    if(flag){
        cout << "You can win" << "\n";
    }
    else{
        cout << "You will lose" << "\n";
    }
    

    return 0;
}