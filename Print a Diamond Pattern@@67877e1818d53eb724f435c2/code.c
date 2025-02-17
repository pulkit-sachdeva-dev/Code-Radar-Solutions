#include <stdio.h>

int main(){
    int row;
    scanf("%d",&row);
    for(int i = 0; i < row; i++){
        for(int j = 1; j <=(2*i-1); j++){
printf("*");
        }
    }
    return 0;
}