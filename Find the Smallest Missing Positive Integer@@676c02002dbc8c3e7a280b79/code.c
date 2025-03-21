#include <stdio.h>

int main(){
    int size; 
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
        if(arr[i] < 0) i--;
    }
    size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    int sum = size/2*((2*min + (size-1)));
    int suma = 0;
    for(int i = 0; i < size; i++){
        suma += arr[i];
    }
    printf("%d",sum-suma); 

    return 0;
}