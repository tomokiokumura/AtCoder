#include<stdio.h>
#include<string.h>

int main(void){
    char a[51], b[51];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    if(strlen(a) > strlen(b)){
        puts(a);
    }
    else{
        puts(b);
    }
    return 0;
}