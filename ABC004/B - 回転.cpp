#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    char c[4][4], ans[4][4];
    
    for(int i = 0; i < 4; i++){
        cin >> c[i][0] >> c[i][1] >> c[i][2] >> c[i][3];
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            ans[3 - i][3 - j] = c[i][j];
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << ans[i][j];
            if(j != 3){
                cout << " ";
            }
            else{
                cout << "\n";
            }
        }
    }

    return 0;
}