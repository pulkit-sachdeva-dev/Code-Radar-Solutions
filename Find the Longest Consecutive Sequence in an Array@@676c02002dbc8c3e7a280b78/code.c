#include <stdio.h>

int main(){

    int size,count = 1;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0 ; i < size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++){  
        if(arr[i+1] != arr[i] + 1) break;
        count++;
    }
    printf("%d",count);
    
    return 0;
}