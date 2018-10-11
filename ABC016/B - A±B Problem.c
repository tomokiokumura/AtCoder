#include<stdio.h>

int main(void){
    int a, b, c, plus = 0, minus = 0;
    char ans;
    scanf("%d %d %d", &a, &b, &c);
    if(a + b == c){
        plus++;
    }
    if(a - b == c){
        minus++;
    }

    if(plus > 0 && minus > 0){
        ans = '?';
    }
    else if(plus > 0 && minus == 0){
        ans = '+';
    }
    else if(plus == 0 && minus > 0){
        ans = '-';
    }
    else{
        ans = '!';
    }

    printf("%c\n", ans);

    return 0;
}