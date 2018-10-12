#include<iostream>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s, head, body, tail;
    int n, l, r;
    cin >> s >> n;
    for(int i = 0; i < n; i++){
        cin >> l >> r;
        head = s.substr(0, l - 1);
        body = s.substr(l - 1, r - l + 1);
        reverse(body.begin(), body.end());
        tail = s.substr(r, s.length() - r);
        s = head + body + tail;
    }

    cout << s << "\n";

    return 0;
}