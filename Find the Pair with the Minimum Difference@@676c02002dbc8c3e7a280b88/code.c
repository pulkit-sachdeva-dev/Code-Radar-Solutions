#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0 ; i < size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < size; i++){
        for(int j = i +1 ; j < size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }   
    }
    int diff = arr[size-1]-arr[size-2];
    if(diff < 0){
        diff = diff*(-1);
        for(int i = 0 ; i < size; i++){
            int cmp = arr[i + 1] - arr[i];
            if(cmp < 0){
                cmp = cmp*(-1);
            }
            if(cmp < diff){
                diff = cmp;
            } 
        }
    }
    printf("%d",diff);
}