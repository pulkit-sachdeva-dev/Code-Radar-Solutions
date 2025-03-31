#include <stdio.h>

int main(){
    int row;
    scanf("%d",&row);
    for(int i = 1; i <= row; i++){
        for(int k = 0; k < (row-i); k++){
            printf(" ");
        }
        for(int j = 1; j <=(2*i-1); j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = row-1; i > 0; i--){
        for(int k = 0; k < (row-i); k++){
            printf(" ");
        }
        for(int j = 1; j <=(2*i-1); j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}