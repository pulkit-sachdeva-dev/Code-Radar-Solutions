#include <stdio.h>


int main() {
    int row;
    int i;
    scanf("%d",&row);
    for(i=0;i<row;i++){
        int j;
        for(j=0;j<row;j++){
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}