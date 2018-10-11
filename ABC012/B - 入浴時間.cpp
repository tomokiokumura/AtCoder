#include<iostream>
#include<iomanip>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, h, m, s, temp;
    cin >> n;
    s = n % 60;
    temp = n / 60;
    m = temp % 60;
    h = temp / 60;

    cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << ":" << setfill('0') << setw(2) << s << "\n";

    return 0;
}