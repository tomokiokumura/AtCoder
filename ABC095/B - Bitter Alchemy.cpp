#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, X;
    cin >> N >> X;
    int m[N];
    for(int i = 0; i < N; ++i){
        cin >> m[i];
    }
    sort(m, m + N);

    int counter = 0;
    for(int i = 0; i < N; ++i){
        if(X >= m[i]){
            X -= m[i];
            ++counter;
        }
    }

    while(X >= m[0]){
        X -= m[0];
        ++counter;
    }

    cout << counter << "\n";

    return 0;
}
