#include<stdio.h>

int main(void){
    int n, i, sum = 0, total = 0, a[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] > 0){
            sum += a[i];
            total++;
        }
    }

    printf("%d\n", (sum + (total - 1)) / total);

    return 0;
}