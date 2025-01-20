#include <stdio.h>


int main() {
    int row;
    int i;
    scanf("%d",&row);
    for(i=0;i<row;i++){
        (i==0 || i==(row-1))?(
            int j;
            for(j=0;j<row;j++){
                printf("*");
            }
        ):(
            int j;
            for(j=0;j<row;j++){
                printf("*");
                printf(" ");
            }
        )
    }
    return 0;
}