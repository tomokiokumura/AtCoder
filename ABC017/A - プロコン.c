#include<stdio.h>

int main(void){
    int i, s[3], e[3], sum = 0;
    for(i = 0; i < 3; i++){
        scanf("%d %d", &s[i], &e[i]);
        sum += s[i] * (e[i] * 0.1);
    }
    printf("%d\n", sum);

    return 0;
}