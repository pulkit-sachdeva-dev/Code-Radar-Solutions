#include <stdio.h>


int main() {
    int row;
    
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        int j;
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
   
    return 0;
}