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
    int flag = 0;
    for(int i = idx ; i < size; i++){
        if(arr[i+1] != arr[i]+1){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("%d",arr[i]+1);
    }else{
        printf("%d",arr[size-1]+1);
    }

    return 0;
}