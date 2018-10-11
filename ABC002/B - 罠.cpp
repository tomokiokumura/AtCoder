#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string input, ans;
    cin >> input;
    for(int i = 0; i < input.length(); i++){
        switch (input[i])
        {
            case 'a':
                break;
            case 'i':
                break;
            case 'u':
                break;
            case 'e':
                break;
            case 'o':
                break;
            default:
                ans += input[i];
                break;
        }
    }
    cout << ans << "\n";

    return 0;
}