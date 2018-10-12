#include<stdio.h>

int main(void){
    int i, abc[3], orderA, orderB, orderC;
    orderA = orderB = orderC = 1;
    for(i = 0; i < 3; i++){
        scanf("%d", &abc[i]);
    }
    if(abc[0] > abc[1]){
        orderB++;
    }
    else{
        orderA++;
    }
    if(abc[0] > abc[2]){
        orderC++;
    }
    else{
        orderA++;
    }
    if(abc[1] > abc[2]){
        orderC++;
    }
    else{
        orderB++;
    }

    printf("%d\n%d\n%d\n", orderA, orderB, orderC);
    return 0;
}