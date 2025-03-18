#include <stdio.h>

int main(){
    int size, flag = -1;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < size-1; i++){
        if(arr[i] > arr[i+1]){
            flag = arr[i];
            break;
        }
    }
    printf("%d",flag);
}