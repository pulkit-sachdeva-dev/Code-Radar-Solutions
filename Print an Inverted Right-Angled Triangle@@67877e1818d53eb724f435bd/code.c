#include <stdio.h>


int main() {
    int rown;
    int i;
    scanf("%d",&rown);
    for(i=rown;i>0;i--){
        int j;
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}