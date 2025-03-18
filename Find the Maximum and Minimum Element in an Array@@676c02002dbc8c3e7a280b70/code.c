#include <stdio.h>
#include <limits.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int max = INT_MAX, min = INT_MIN;
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d %d", min , max);

    return 0;

}