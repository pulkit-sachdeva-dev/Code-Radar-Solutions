#include <stdio.h>
#include <limits.h>

int main(){

    int size,count = 1;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0 ; i < size; i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    for(int i = 0; i < size; i++){
        if(arr[i] == min+1){
            count++;
            min = arr[i];
        }
    }
    printf("%d",count);
    return 0;
}