#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> s;
    s.resize(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    sort(s.begin(), s.end());
    string name = s[0], tempName = s[0];
    int max = 0, tempMax = 0;
    for(int i = 0; i < n; i++){
        if(tempName == s[i]){
            tempMax++;
            if(tempMax > max){
                max = tempMax;
                name = tempName;
                if(max > s.size() / 2){
                    break;
                }
            }
        }
        else{
            tempName = s[i];
            tempMax = 1;
        }
    }
    cout << name << "\n";

    return 0;
}