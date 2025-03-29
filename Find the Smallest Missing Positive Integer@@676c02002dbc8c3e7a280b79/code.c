#include <stdio.h>

int main(){
    int size; 
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    // sorting 
    for(int i = 0 ; i < size; i++){
        for(int j = i + 1 ; j < size; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int idx = 0; 
    while(arr[idx] < 0){
        idx++;
    }
    for(int i = idx ; i < size; i++){
        if(arr[i+1] != arr[i]+1){
            printf("%d",arr[i]+1);
            break;
        }
    }

    return 0;
}