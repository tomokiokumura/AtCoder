#include<stdio.h>
#include<string.h>

int main(void){
    int i;
    char x[50], ans[3];
    strcpy(ans, "YES");
    scanf("%s", x);

    for(i = 0; i < strlen(x); i++){
        if(x[i] == 'c' && x[i + 1] == 'h'){
            i++;
            continue;
        }
        else if(x[i] != 'o' && x[i] != 'k' && x[i] != 'u'){
            strcpy(ans, "NO");
            break;
        }
    }
    if(x == NULL){
        strcpy(ans, "YES");
    }

    printf("%s\n", ans);

    return 0;
}