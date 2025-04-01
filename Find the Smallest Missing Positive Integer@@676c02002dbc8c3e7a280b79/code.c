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
    while(arr[idx] <= 0){
        idx++;
    }
    int flag = 0;
    for(int i = idx, j = 1 ; i < size; i++, j++){
        if(arr[i] != j && j != size-1){
            flag = j;
            break;
        }else if(arr[i] == j && i == size-1){
            flag = j+1;
            break;
        }
    }
    if(flag){
        printf("%d",flag);
    }else{
        printf("1");
    }

    return 0;
}