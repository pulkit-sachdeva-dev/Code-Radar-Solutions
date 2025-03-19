#include <stdio.h>

int main(){
    int size; 
    scanf("%d",&size):
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i = 0 ; i < size; i++){
        if(arr[i] == k){
            printf("%d",i);
            break;
        }else if(i == size-1){
            printf("-1");
        }

    }
    return 0;
}