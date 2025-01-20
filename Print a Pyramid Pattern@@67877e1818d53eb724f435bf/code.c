#include <stdio.h>

int main() {
    int row;
    int i;
    scanf("%d",&row);
    for(i=0;i<row;i++){
        int j;
        for(j=0;j<(row-i);j++){
            printf(" ");
        }
        int k;
        for(k=0;k<(2*i+1);k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}