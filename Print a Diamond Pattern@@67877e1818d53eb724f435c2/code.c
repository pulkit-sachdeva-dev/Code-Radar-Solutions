#include <stdio.h>

int main(){
    int row;
    scanf("%d",&row);
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <=(2*i-1); j++){
printf("*");
        }
        printf("\n");
    }
    return 0;
}