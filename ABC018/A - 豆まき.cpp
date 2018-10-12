#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b, c;
    string order;
    cin >> a >> b >> c;
    if(a > b){
        if(b > c){
            order = "123";
        }
        else if(a > c){
            order = "132";
        }
        else{
            order = "231";
        }
    }
    else if(b > c){
        if(c > a){
            order = "312";
        }
        else{
            order = "213";
        }
    }
    else{
        order = "321";
    }

    for(int i = 0; i < 3; i++){
        cout << order[i] << "\n";
    }

    return 0;
}