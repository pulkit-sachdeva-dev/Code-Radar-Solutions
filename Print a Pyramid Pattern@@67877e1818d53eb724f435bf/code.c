#include <stdio.h>

int main() {
    int row;
    int i;
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        int j;
        for(j=0;j<(row-i);j++){
            printf(" ");
        }
        int k;
        for(k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}