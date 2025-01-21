#include <stdio.h>


int main() {
    int row;
    int i;
    printf("enter ; ");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        printf("*");
    }
    printf("\n");
    int j;
    for(j=0;j<(row-2);j++){
        int k;
        for(k=1;k<=row;k++){
            if(k==1){
                printf("*");
            }else if(k==row){
                    printf("*\n");
            }else{
                printf(" ");
            }
        }
    }
    for(i=0;i<row;i++){
        printf("*");
    }
    return 0;
}