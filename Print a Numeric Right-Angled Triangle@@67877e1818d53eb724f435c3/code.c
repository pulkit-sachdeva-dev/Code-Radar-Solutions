#include <stdio.h>


int main() {
    int row;
    int i;
    scanf("%d",row);
    for(i=1;i<=row;i++){
        int j;
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
   
    return 0;
}