#include<iostream>
#include<algorithm>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    string substr1 = s.substr(0, 1);
    string substr2 = s.substr(1, s.length() - 1);
    transform(substr1.begin(), substr1.end(), substr1.begin(), ::toupper);
    transform(substr2.begin(), substr2.end(), substr2.begin(), ::tolower);

    cout << substr1 << substr2 << "\n";

    return 0;
}